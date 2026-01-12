#include "drone.h"
#include <iostream>
#include <regex>
#include <QQuaternion>
#include <QVector3D>

// Включаем заголовочный файл сцены для доступа к OBJInSceneData
#include "scene.h"

void PolarCoordinate::setRadius(double r) {
    radius = std::abs(r);
}

void PolarCoordinate::setAngle(double theta) {
    angle = normalizeAngle(theta);
}

void PolarCoordinate::setAngleDegrees(double degrees) {
    angle = normalizeAngle(degrees * M_PI / 180.0);
}

std::pair<double, double> PolarCoordinate::toCartesian() const {
    double x = radius * std::cos(angle);
    double y = radius * std::sin(angle);
    return {x, y};
}

double PolarCoordinate::distanceTo(const PolarCoordinate& other) const {
    // Используем теорему косинусов для полярных координат
    return std::sqrt(
        radius * radius +
        other.radius * other.radius -
        2 * radius * other.radius * std::cos(angle - other.angle)
        );
}

PolarCoordinate PolarCoordinate::rotate(double deltaTheta) const {
    return PolarCoordinate(radius, angle + deltaTheta);
}

PolarCoordinate PolarCoordinate::scale(double factor) const {
    return PolarCoordinate(radius * factor, angle);
}

Drone::Drone() : rot_(0.0, 0.0, 0.0) {
    SetDefaultRotation();
}

void Drone::SetDefaultRotation() {
    rot_ = Rotation(0.0, 0.0, 0.0);

    // Также сбрасываем вращение 3D модели, если она установлена
    if (drone_model_data_ && drone_model_data_->Transform) {
        drone_model_data_->Transform->setRotation(QQuaternion::fromEulerAngles(0.0f, 0.0f, 0.0f));
    }

    std::cout << "Drone rotation reset to default: pitch=0, roll=0, yaw=0" << std::endl;
}

void Drone::UpdateRotation(const Rotation& rot) {
    rot_ = rot;
    std::cout << "Drone rotation updated: "
              << "pitch=" << rot_.pitch << "°, "
              << "roll=" << rot_.roll << "°, "
              << "yaw=" << rot_.yaw << "°" << std::endl;

    // Автоматически обновляем вращение 3D модели, если она установлена
    UpdateDroneModelRotation(drone_model_data_);
}

bool Drone::UpdateRotationFromJSON(const std::string& jsonString) {
    try {
        std::istringstream iss(jsonString);
        json::Document doc = json::Load(iss);
        return ParseFlightJSON(doc);
    }
    catch (const json::ParsingError& e) {
        std::cerr << "JSON parsing error: " << e.what() << std::endl;
        return false;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}

bool Drone::UpdateRotationFromSerialLine(const std::string& line) {
    // Ищем JSON часть в строке (после "FLIGHT_JSON: ")
    std::regex json_pattern(R"(FLIGHT_JSON:\s*(\{.*\}))");
    std::smatch match;

    if (std::regex_search(line, match, json_pattern) && match.size() > 1) {
        std::string jsonStr = match[1].str();
        std::cout << "Extracted JSON: " << jsonStr << std::endl;
        return UpdateRotationFromJSON(jsonStr);
    }

    // Пробуем распарсить всю строку как JSON (на случай, если префикса нет)
    std::cout << "No FLIGHT_JSON prefix found, trying to parse entire line as JSON" << std::endl;
    return UpdateRotationFromJSON(line);
}

bool Drone::ParseFlightJSON(const json::Document& doc) {
    try {
        const json::Node& root = doc.GetRoot();

        if (!root.IsDict()) {
            std::cerr << "Root is not a dictionary" << std::endl;
            return false;
        }

        const auto& dict = root.AsDict();

        // Извлекаем angles
        auto it_angles = dict.find("angles");
        if (it_angles == dict.end() || !it_angles->second.IsDict()) {
            std::cerr << "No 'angles' object found" << std::endl;
            return false;
        }

        const auto& angles = it_angles->second.AsDict();

        // Извлекаем значения углов
        double pitch = 0.0, roll = 0.0, yaw = 0.0;

        auto it_pitch = angles.find("pitch");
        if (it_pitch != angles.end() && it_pitch->second.IsDouble()) {
            pitch = it_pitch->second.AsDouble();
        }

        auto it_roll = angles.find("roll");
        if (it_roll != angles.end() && it_roll->second.IsDouble()) {
            roll = it_roll->second.AsDouble();
        }

        auto it_yaw = angles.find("yaw");
        if (it_yaw != angles.end() && it_yaw->second.IsDouble()) {
            yaw = it_yaw->second.AsDouble();
        }

        // Обновляем вращение дрона
        Rotation newRotation(pitch, roll, yaw);
        UpdateRotation(newRotation);

        // Также можно извлечь дополнительную информацию для отладки
        auto it_counter = dict.find("counter");
        if (it_counter != dict.end()) {
            std::cout << "Packet counter: " << it_counter->second.AsInt() << std::endl;
        }

        auto it_timestamp = dict.find("timestamp");
        if (it_timestamp != dict.end()) {
            std::cout << "Timestamp: " << it_timestamp->second.AsInt() << " ms" << std::endl;
        }

        return true;
    }
    catch (const std::exception& e) {
        std::cerr << "Error parsing flight JSON: " << e.what() << std::endl;
        return false;
    }
}

void Drone::UpdateDroneModelRotation(OBJInSceneData* drone_data) {
    if (!drone_data || !drone_data->Transform) {
        return;
    }

    // Конвертируем углы в float для Qt
    float pitch = static_cast<float>(rot_.pitch);
    float roll = static_cast<float>(rot_.roll);
    float yaw = static_cast<float>(rot_.yaw);

    // Создаем кватернион из углов Эйлера
    // Порядок вращений: Z (yaw), X (pitch), Y (roll) - стандартный порядок авиации
    QQuaternion rotation = QQuaternion::fromEulerAngles(pitch, roll, yaw);

    // Устанавливаем вращение трансформа
    drone_data->Transform->setRotation(rotation);

    // Отладочный вывод
    std::cout << "3D Model rotation updated: "
              << "pitch=" << pitch << "°, "
              << "roll=" << roll << "°, "
              << "yaw=" << yaw << "°" << std::endl;
}
