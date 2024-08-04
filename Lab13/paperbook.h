#pragma once
#include "item.h"

class Paperbook : public Item
{
private:
	int pages;
public:
	void getdata()
	{
		Item::getdata();
		std::cout << "Введите число страниц : ";
		std::cin >> pages;
	}
	void putdata()
	{
		Item::putdata();
		std::cout << "\nСтраниц:" << pages;
	}
};
