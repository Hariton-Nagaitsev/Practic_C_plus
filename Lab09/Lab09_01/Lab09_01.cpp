#include <iostream>
#include <stdexcept>
#include <cmath>

class Triangle {
private:
    double a, b, c;

    void triangleError(double a, double b, double c) {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw std::invalid_argument("Стороны должны быть положительными");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw std::invalid_argument("Некорректные размеры сторон");
        }
    }

public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {
        triangleError(a, b, c);
    }

    double area() const {
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double getA() const { return a; }
    double getB() const { return b; }
    double getC() const { return c; }
};

int main() {
    system("chcp 1251");

    try {
        // Корректный ввод
        std::cout << "Корректный ввод (3, 4, 5)" << std::endl;
        Triangle t1(3, 4, 5);
        std::cout << "Площадь треугольника: " << t1.area() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    try {
        // Некорректный ввод (несоответствие неравенству треугольника)
        std::cout << "Некорректный ввод (1, 2, 10)" << std::endl;
        Triangle t2(1, 2, 10);
        std::cout << "Площадь треугольника: " << t2.area() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    try {
        // Некорректный ввод (отрицательная сторона)
        std::cout << "Некорректный ввод (-3, 4, 5)" << std::endl;
        Triangle t3(-3, 4, 5);
        std::cout << "Площадь треугольника: " << t3.area() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
