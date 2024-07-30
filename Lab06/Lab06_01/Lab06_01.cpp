#include <iostream>
#include <fstream>
#include <string>

int main()
{
    system("chcp 1251");

    std::string text;
    std::string result;
    bool flag = true;

    std::ofstream fout("Txt.txt");

    std::cout << "Введите текст для записи в файл (для окончания ввода введите End)" << std::endl;

    while (flag) {
        std::getline(std::cin, text);

        if (text == "End") flag = false;

        result += (text + '\n');
    }
    std::cout << result;
    fout << result;
    fout.close();
    std::cout << "Текст записан в файл" << std::endl;

    return 0;
}
