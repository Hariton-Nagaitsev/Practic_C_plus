#include <iostream>

struct SolutionEqat
{
    double x1;
    double x2;
    int status;
};

SolutionEqat Myroot(double, double, double);
void ShowSolution(const SolutionEqat T);

int main()
{
    system("chcp 1251");

    double a = 0, b = 0, c = 0;

    std::cout << "Введите значения коэффициентов a,b,c a*x^2 + b*x + c = 0:" << std::endl;
    std::cin >> a; std::cin >> b; std::cin >> c;

    SolutionEqat otvet = Myroot(a, b, c);
    ShowSolution(otvet);

    return 0;
}

SolutionEqat Myroot(double a, double b, double c) {
    double x1, x2;
    SolutionEqat T;

    if (a == 0) {
        T.x1 = T.x2 = -1 * c / b;
        T.status = 0;
    }
    else if (b == 0 && c == 0) {
        T.x1 = T.x2 = 0;
        T.status = 0;
    }
    else if (b == 0) {
        if (-1 * c / a < 0) {
            T.x1 = T.x2 = 0;
            T.status = -1;
        }
        else {
            T.x1 = sqrt(-1 * c / a);
            T.x2 = -1 * sqrt(-1 * c / a);
            T.status = 1;
        }
    }
    else if (c == 0) {
        T.x1 = 0;
        T.x2 = -1 * b / a;
        T.status = 1;
    }
    else {
        double disc;

        disc = b * b - 4 * a * c;

        if (disc < 0) {
            T.x1 = T.x2 = 0;
            T.status = -1;
        }
        else if (disc == 0) {
            T.x1 = T.x2 = -1 * b / (2 * a);
            T.status = 0;
        }
        else {
            T.x1 = (-1 * b - sqrt(disc)) / (2 * a);
            T.x2 = (-1 * b + sqrt(disc)) / (2 * a);
            T.status = 1;
        }
    }
    return T;
}

void ShowSolution(const SolutionEqat T)
{
    switch (T.status) {
    case -1:
        std::cout << "Корней уравнения нет" << std::endl;
        break;
    case 0:
        std::cout << "Корень уравнения один x1 = x2 = " << T.x1 << std::endl;
        break;
    case 1:
        std::cout << "Корни уравнения x1 = " << T.x1 << " x2 = " << T.x2 << std::endl;
        break;
    }
}