#include <iostream>
#include <cmath>

int main()
{
    system("chcp 1251");


    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;

    std::cout << "Введите координаты первой вершины = ";
    std::cin >> x1 >> y1;

    std::cout << "\nВведите координаты второй вершины = ";
    std::cin >> x2 >> y2;

    std::cout << "\nВведите координаты третей вершины = ";
    std::cin >> x3 >> y3;

    std::cout << "\nВведите координаты четертой вершины = ";
    std::cin >> x4 >> y4;

    std::cout << "\nВведите координаты пятой вершины = ";
    std::cin >> x5 >> y5;

    std::cout << "\nПлощадь = " << 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) << std::endl;

    return 0;
}