#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using Tuple = std::tuple<double, double, int>;

Tuple Myroot(double, double, double);
void ShowSolution(const Tuple);

int main()
{
    system("chcp 1251");

    double a = 0, b = 0, c = 0;

    std::cout << "Введите значения коэффициентов a,b,c a*x^2 + b*x + c = 0:" << std::endl;
    std::cin >> a; std::cin >> b; std::cin >> c;

    Tuple otvet = Myroot(a, b, c);
    ShowSolution(otvet);

    return 0;
}

Tuple Myroot(double a, double b, double c) {
    double x1, x2;
    int status;

    if (a == 0) {
        x1 = x2 = -1 * c / b;
        status = 0;
        return std::make_tuple(x1, x2, status);
    }
    else if (b == 0 && c == 0) {
        x1 = x2 = 0;
        status = 0;
        return std::make_tuple(x1, x2, status);
    }
    else if (b == 0) {
        if (-1 * c / a < 0) {
            x1 = x2 = 0;
            status = -1;
            return std::make_tuple(x1, x2, status);
        }
        else {
            x1 = sqrt(-1 * c / a);
            x2 = -1 * sqrt(-1 * c / a);
            status = 1;
            return std::make_tuple(x1, x2, status);
        }
    }
    else if (c == 0) {
        x1 = 0;
        x2 = -1 * b / a;
        status = 1;
        return std::make_tuple(x1, x2, status);
    }
    else {
        double disc;

        disc = b * b - 4 * a * c;

        if (disc < 0) {
            x1 = x2 = 0;
            status = -1;
            return std::make_tuple(x1, x2, status);
        }
        else if (disc == 0) {
            x1 = x2 = -1 * b / (2 * a);
            status = 0;
            return std::make_tuple(x1, x2, status);
        }
        else {
            x1 = (-1 * b - sqrt(disc)) / (2 * a);
            x2 = (-1 * b + sqrt(disc)) / (2 * a);
            status = 1;
            return std::make_tuple(x1, x2, status);
        }
    }
}

void ShowSolution(Tuple T)
{
    switch (std::get<2>(T)) {
    case -1:
        std::cout << "Корней уравнения нет" << std::endl;
        break;
    case 0:
        std::cout << "Корень уравнения один x1 = x2 = " << std::get<0>(T) << std::endl;
        break;
    case 1:
        std::cout << "Корни уравнения x1 = " << std::get<0>(T) << " x2 = " << std::get<1>(T) << std::endl;
        break;
    }
}