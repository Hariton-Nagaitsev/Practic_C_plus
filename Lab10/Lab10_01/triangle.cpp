#include "triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(Dot* p1, Dot* p2, Dot* p3)
    : p1(p1), p2(p2), p3(p3) {}

void Triangle::printSides() {
    double side1 = p1->distanceTo(*p2);
    double side2 = p2->distanceTo(*p3);
    double side3 = p3->distanceTo(*p1);

    std::cout << "Sides lengths: " << side1 << ", " << side2 << ", " << side3 << std::endl;
}

double Triangle::perimeter() {
    double side1 = p1->distanceTo(*p2);
    double side2 = p2->distanceTo(*p3);
    double side3 = p3->distanceTo(*p1);

    return side1 + side2 + side3;
}

double Triangle::area() {
    double side1 = p1->distanceTo(*p2);
    double side2 = p2->distanceTo(*p3);
    double side3 = p3->distanceTo(*p1);
    double s = perimeter() / 2;

    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
