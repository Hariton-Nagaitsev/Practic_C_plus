#include <iostream>
#include <string>
#include <cctype>

bool validate_snils(const std::string snils) {
    std::string clean_snils;

    for (char ch : snils) {
        if (isdigit(ch)) {
            clean_snils += ch;
        }
        else if (ch != ' ' && ch != '-') {
            return false;
        }
    }

    if (clean_snils.length() != 11) {
        return false;
    }

    for (int i = 0; i < 9; ++i) {
        if (clean_snils[i] == clean_snils[i + 1] && clean_snils[i] == clean_snils[i + 2]) {
            return false;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (clean_snils[i] - '0') * (9 - i);
    }

    int control_number;
    if (sum < 100) {
        control_number = sum;
    }
    else if (sum == 100 || sum == 101) {
        control_number = 0;
    }
    else {
        control_number = sum % 101;
        if (control_number == 100) {
            control_number = 0;
        }
    }

    int given_control_number = std::stoi(clean_snils.substr(9, 2));

    return control_number == given_control_number;
}

int main() {
    std::string snils;
    std::cout << "Введите номер СНИЛС: ";
    std::getline(std::cin, snils);

    if (validate_snils(snils)) {
        std::cout << "СНИЛС валидный.\n";
    }
    else {
        std::cout << "СНИЛС невалидный.\n";
    }

    return 0;
}
