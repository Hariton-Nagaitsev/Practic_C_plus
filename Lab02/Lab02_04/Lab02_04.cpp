#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    system("chcp 1251");
    int shot = 1; // число выстрелов
    int win_count = 0; // число выигранных очков
    const int target_score = 50; // целевое количество очков

    while (win_count < target_score) {
        try {
            cout << "Выполните " << shot << " выстрел" << endl;
            cout << "Введите значение x: ";
            string input;
            getline(cin, input);
            double x = stod(input); // первая длина катета треугольника
            cout << "Введите значение y: ";
            getline(cin, input);
            double y = stod(input); // вторая длина катета треугольника

            double c = sqrt(pow(abs(x), 2) + pow(abs(y), 2)); // расчет длины гипотенузы

            if (c <= 1) {
                win_count += 10;
                cout << "Вы выиграли 10 очков" << endl;
            }
            else if (c > 1 && c <= 2) {
                win_count += 5;
                cout << "Вы выиграли 5 очков" << endl;
            }
            else if (c > 2 && c <= 3) {
                win_count += 1;
                cout << "Вы выиграли 1 очко" << endl;
            }
            else {
                cout << "Вы промахнулись" << endl;
            }

            cout << "Ваш текущий счет: " << win_count << " очков" << endl;
        }
        catch (const invalid_argument& e) {
            cout << "Ошибка: неверный ввод. Попробуйте снова." << endl;
        }
        catch (const exception& e) {
            cout << e.what() << endl;
        }
        shot++;
    }

    cout << "Вы набрали " << win_count << " очков за " << shot - 1 << " выстрелов!" << endl;

    if (shot - 1 <= 10) {
        cout << "Уровень стрелка: Снайпер" << endl;
    }
    else if (shot - 1 <= 20) {
        cout << "Уровень стрелка: Просто стрелок" << endl;
    }
    else {
        cout << "Уровень стрелка: Новичок" << endl;
    }

    cout << "Игра окончена!" << endl;

    return 0;
}
