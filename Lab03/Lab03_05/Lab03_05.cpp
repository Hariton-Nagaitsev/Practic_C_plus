#include <iostream>
#include <string>

void Bin(int x, std::string& cc);

void main()
{
    system("chcp 1251");

    int b;

    std::string c;
    std::cout << "Введите число : ";
    std::cin >> b;
    Bin(b, c);
    std::cout << c << std::endl;

}

void Bin(int x, std::string& cc)
{
    if (x > 0)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
            Bin(x, cc);
            cc += '0';
        }
        else {
            x = x / 2;
            Bin(x, cc);
            cc += '1';
        }
    }
}