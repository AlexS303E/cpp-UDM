#pragma once
#include <cmath>
#include <iostream>
#include <optional>

enum TargetType{
    Unknown,
    FPV,
    Wing,
    Plane,
    Helicopter,
};


class PolarCoordinate {


public:
    PolarCoordinate() : radius(0.0), angle(0.0) {}

    PolarCoordinate(double r, double theta)
        : radius(std::abs(r)), angle(normalizeAngle(theta)) {}

    // Геттеры
    double getRadius() const { return radius; }
    double getAngle() const { return angle; }  // В радианах
    double getAngleDegrees() const { return angle * 180.0 / M_PI; }  // В градусах

    // Сеттеры с валидацией
    void setRadius(double r);

    void setAngle(double theta);

    void setAngleDegrees(double degrees);

    // Преобразование в декартовы координаты
    std::pair<double, double> toCartesian() const;

    // Создание из декартовых координат (статический метод)
    static PolarCoordinate fromCartesian(double x, double y) {
        double r = std::sqrt(x * x + y * y);
        double theta = std::atan2(y, x);
        return PolarCoordinate(r, theta);
    }

    // Расстояние между двумя точками
    double distanceTo(const PolarCoordinate& other) const;

    // Операции
    PolarCoordinate rotate(double deltaTheta) const;

    PolarCoordinate scale(double factor) const;

    // Вывод в поток
    friend std::ostream& operator<<(std::ostream& os, const PolarCoordinate& p) {
        os << "(" << p.radius << ", " << p.angle << " rad)";
        return os;
    }

private:
    // Нормализация угла к диапазону [0, 2π)
    static double normalizeAngle(double theta) {
        double normalized = std::fmod(theta, 2 * M_PI);
        if (normalized < 0) {
            normalized += 2 * M_PI;
        }
        return normalized;
    }

    double radius;      // Радиус (r) ≥ 0
    double angle;       // Угол (θ) в радианах
};


struct Target{
    TargetType type;
    std::optional<double> distance;
    PolarCoordinate cur_coord;
    std::optional<PolarCoordinate> velocity;

};

class Drone {
public:
    Drone();


private:
    std::optional<Target> target_;
};

