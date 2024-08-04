#pragma once
#include "item.h"

class AudioBook : public Item
{
private:
	double time;
public:
	void getdata()
	{
		Item::getdata();
		std::cout << "Введите время звучания : ";
		std::cin >> time;
	}
	void putdata()
	{
		Item::putdata();
		std::cout << "\nВремя звучания : " << time;
	}
};