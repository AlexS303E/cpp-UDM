#include "drone.h"




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

static PolarCoordinate fromCartesian(double x, double y) {
    double r = std::sqrt(x * x + y * y);
    double theta = std::atan2(y, x);
    return PolarCoordinate(r, theta);
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



Drone::Drone() {}
