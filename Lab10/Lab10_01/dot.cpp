#include "dot.h"
#include <cmath>

Dot::Dot() : x(0), y(0) {}

Dot::Dot(double x, double y) : x(x), y(y) {}

double Dot::distanceTo(Dot point) {
    return std::sqrt(std::pow(point.x - x, 2) + std::pow(point.y - y, 2));
}
