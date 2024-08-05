#pragma once
#include "human.h"
#include <string>

class Teacher : public Human {

public:
	void getdata() {
		Human::getdata();

		std::cout << "Введите количество рабочих часов: ";
		std::cin >> work_time;
	}

	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void putdata() {
		Human::putdata();
		std::cout << "Количество часов: " << get_work_time() << std::endl;
	}
private:
	unsigned int work_time;
};
