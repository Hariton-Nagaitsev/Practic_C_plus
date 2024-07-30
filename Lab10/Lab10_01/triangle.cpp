#include "triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : p1(x1, y1), p2(x2, y2), p3(x3, y3) {}

Triangle::Triangle(Dot p1, Dot p2, Dot p3)
    : p1(p1), p2(p2), p3(p3) {}

void Triangle::printSides() {
    double side1 = p1.distanceTo(p2);
    double side2 = p2.distanceTo(p3);
    double side3 = p3.distanceTo(p1);

    std::cout << "Sides lengths: " << side1 << ", " << side2 << ", " << side3 << std::endl;
}

double Triangle::perimeter() {
    double side1 = p1.distanceTo(p2);
    double side2 = p2.distanceTo(p3);
    double side3 = p3.distanceTo(p1);

    return side1 + side2 + side3;
}

double Triangle::area() {
    double side1 = p1.distanceTo(p2);
    double side2 = p2.distanceTo(p3);
    double side3 = p3.distanceTo(p1);
    double s = perimeter() / 2;

    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
