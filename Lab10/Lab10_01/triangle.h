#pragma once

#include "dot.h"

class Triangle {
private:
    Dot* p1;
    Dot* p2;
    Dot* p3;
public:
    Triangle(Dot* p1, Dot* p2, Dot* p3);

    void printSides();
    double perimeter();
    double area();
};



