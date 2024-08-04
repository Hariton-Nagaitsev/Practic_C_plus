#include "dot.h"
#include "triangle.h"
#include <iostream>

int main() {
    std::cout << "Агрегация:" << std::endl;
    Dot p1(0, 0);
    Dot p2(3, 0);
    Dot p3(0, 4);
    Triangle t2(&p1, &p2, &p3);
    t2.printSides();
    std::cout << "Perimeter: " << t2.perimeter() << std::endl;
    std::cout << "Area: " << t2.area() << std::endl;

    return 0;
}
