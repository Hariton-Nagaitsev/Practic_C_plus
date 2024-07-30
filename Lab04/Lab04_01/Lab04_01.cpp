#include <iostream>
#include <cmath>

int Myroot(double, double, double, double&, double&);

int main()
{
    system("chcp 1251");

    double a = 0, b = 0, c = 0, x1, x2;

    std::cout << "Введите значения коэффициентов a,b,c a*x^2 + b*x + c = 0:" << std::endl;
    std::cin >> a; std::cin >> b; std::cin >> c;

    short menu = Myroot(a, b, c, x1, x2);

    switch (menu) {
    case -1:
        std::cout << "Корней уравнения нет" << std::endl;
        break;
    case 0:
        std::cout << "Корень уравнения один x1 = x2 = " << x1 << std::endl;
        break;
    case 1:
        std::cout << "Корни уравнения x1 = " << x1 << " x2 = " << x2 << std::endl;
        break;
    }

    return 0;
}

int Myroot(double a, double b, double c, double& x1, double& x2) {
    if (a == 0) {
        x1 = x2 = -1 * c / b;
        return 0;
    }
    else if (b == 0 && c == 0) {
        x1 = x2 = 0;
        return 0;
    }
    else if (b == 0) {
        if (-1 * c / a < 0) {
            return -1;
        }
        else {
            x1 = sqrt(-1 * c / a);
            x2 = -1 * sqrt(-1 * c / a);
            return 1;
        }
    }
    else if (c == 0) {
        x1 = 0;
        x2 = -1 * b / a;
        return 1;
    }
    else {
        double disc;

        disc = b * b - 4 * a * c;

        if (disc < 0) {
            return -1;
        }
        else if (disc == 0) {
            x1 = x2 = -1 * b / (2 * a);
            return 0;
        }
        else {
            x1 = (-1 * b - sqrt(disc)) / (2 * a);
            x2 = (-1 * b + sqrt(disc)) / (2 * a);
            return 1;
        }
    }
}