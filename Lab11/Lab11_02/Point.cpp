#include "Point.h"

Point::Point() : x(0), y(0) {}

Point::Point(double xx, double yy) : x(xx), y(yy) {}

void Point::set_x(double xx) {
    x = xx;
}

double Point::get_x() const {
    return x;
}

void Point::set_y(double yy) {
    y = yy;
}

double Point::get_y() const {
    return y;
}

bool Point::operator<(const Point& p) const {
    return std::sqrt(x * x + y * y) < std::sqrt(p.x * p.x + p.y * p.y);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "координата х: " << p.get_x() << " координата y: " << p.get_y();
    return os;
}
