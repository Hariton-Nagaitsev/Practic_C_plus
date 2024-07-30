#include <iostream>
#include <cstring>

int main(int argc, char* argv[])
{
    system("chcp 1251");

    if (argc < 4) {
        std::cout << "Введено некорректное число аргументов\nЗавершение программы..." << std::endl;
        return -1;
    }
    char validate[][10] = { "–a", " - m" };

    if (strncmp(validate[0], argv[1], 2) == 0) {
        return atoi(argv[2]) + atoi(argv[3]);
    }
    else if (strncmp(validate[1], argv[1], 2) == 0) {
        return atoi(argv[2]) * atoi(argv[3]);
    }
    else {
        return -1;
    }
}
