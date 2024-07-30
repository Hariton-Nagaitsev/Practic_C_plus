#include <iostream>
#include <cmath>

bool simpleNum(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool superSimpleNum(int n) {
    if (!simpleNum(n)) return false;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (!simpleNum(digit)) return false;
        temp /= 10;
    }
    return true;
}

int main() {
    system("chcp 1251");
    int number;
    std::cout << "Введите число для проверки: ";
    std::cin >> number;

    if (superSimpleNum(number)) {
        std::cout << number << " является суперпростым числом\n";
    }
    else {
        std::cout << number << " не является суперпростым числом\n";
    }
    return 0;
}

