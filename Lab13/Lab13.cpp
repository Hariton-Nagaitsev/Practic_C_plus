#include <iostream>
#include "audiobook.h"
#include "paperbook.h"

int main()
{
    SetConsoleOutputCP(1251);

    Item* pubarr[100];

    int n = 0;
    char choice;
    do
    {
        std::cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
        std::cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        pubarr[n++]->getdata();
        std::cout << "Продолжать((у / n) ? ";
        std::cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++)
        pubarr[j]->putdata();
    std::cout << std::endl;
    return 0;
}