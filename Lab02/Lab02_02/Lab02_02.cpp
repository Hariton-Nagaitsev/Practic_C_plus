#include <iostream>
#include <string>

int main() {
    system("chcp 1251");
    std::string snils;
    std::cout << "Введите номер СНИЛС: ";
    std::cin >> snils;

    if (snils.length() != 11) {
        std::cout << "СНИЛС невалидный.\n";
        return 0;
    }

    for (char c : snils) {
        if (!isdigit(c)) {
            std::cout << "СНИЛС невалидный.\n";
            return 0;
        }
    }

    for (int i = 0; i < 7; ++i) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            std::cout << "СНИЛС невалидный.\n";
            return 0;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (snils[i] - '0') * (9 - i);
    }


    int controlNumber;
    if (sum < 100) {
        controlNumber = sum;
    }
    else if (sum == 100 || sum == 101) {
        controlNumber = 0;
    }
    else {
        controlNumber = sum % 101;
        if (controlNumber == 100) {
            controlNumber = 0;
        }
    }

    int givenControlNumber = std::stoi(snils.substr(9, 2));
    if (controlNumber == givenControlNumber) {
        std::cout << "СНИЛС валидный.\n";
    }
    else {
        std::cout << "СНИЛС невалидный.\n";
    }
    return 0;
}
