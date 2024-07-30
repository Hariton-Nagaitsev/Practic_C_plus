#include <iostream>
#include <stdexcept>
#include "Time.h"

int main() {
    system("chcp 1251");

    Time* time1 = nullptr;
    Time* time2 = nullptr;
    Time* time3 = nullptr;

    try {
        time1 = new Time();
        time1->ShowTime();

        int hour, minute, second;
        std::cout << "\nВведите количество часов: ";
        std::cin >> hour;
        std::cout << "Введите количество минут: ";
        std::cin >> minute;
        std::cout << "Введите количество секунд: ";
        std::cin >> second;

        try {
            time2 = new Time(hour, minute, second);
            time2->ShowTime();
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Ошибка при создании time2: " << e.what() << std::endl;
        }

        std::cout << "\nВведите количество часов: ";
        std::cin >> hour;
        std::cout << "Введите количество минут: ";
        std::cin >> minute;
        std::cout << "Введите количество секунд: ";
        std::cin >> second;

        try {
            time3 = new Time(hour, minute, second);
            time3->ShowTime();

            if (time2) {
                Time result = time2->AddTime(*time3);
                result.ShowTime();
            }

        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Ошибка при создании time3: " << e.what() << std::endl;
        }

        delete time1;
        if (time2) {
            delete time2;
        }
        if (time3) {
            delete time3;
        }

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
