#pragma once
#include <iostream>
#include <string>
#include <windows.h>

class Item
{
private:
	std::string title;
	double price;
public:
	virtual void getdata()
	{
		std::cout << "\nВведите заголовок : ";
		std::cin >> title;
		std::cout << "Введите цену : ";
		std::cin >> price;
	}
	virtual void putdata()
	{
		std::cout << "\nЗаголовок: " << title;
		std::cout << "\nЦена:" << price;
	}
};
