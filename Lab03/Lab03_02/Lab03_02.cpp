#include <iostream>
#include <cmath>

double MathPow(double x);
double MathPowIter(double x);

int main()
{
    system("chcp 1251");

    double x;

    std::cout << "Введите число: "; std::cin >> x;
    std::cout << std::endl;
    std::cout << "С помощью стандартной функции: " << MathPow(x) << std::endl;
    std::cout << "Итерационный метод: " << MathPowIter(x) << std::endl;
}

double MathPow(double x) {
    return std::pow(x, 1.0 / 3);
}

double MathPowIter(double x) {

    double precision = 0.00001;

    double x_prev, x_curr = x / 3.0;
    do {
        x_prev = x_curr;
        x_curr = (2. * x_prev + x / (x_prev * x_prev)) / 3.;
    } while (std::abs(x_prev - x_curr) >= precision);

    return  x_curr;
}