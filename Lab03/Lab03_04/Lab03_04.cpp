#include<iostream>

int Summ(int n);

int main() {
    system("chcp 1251");

    int n;

    std::cout << "Введите значени n: ";
    std::cin >> n;
    std::cout << Summ(n) << std::endl;
    return 0;
}

int Summ(int n) {
    if (n == 0)
        return 0;
    else
        return (n * 5) + Summ(n - 1);
}