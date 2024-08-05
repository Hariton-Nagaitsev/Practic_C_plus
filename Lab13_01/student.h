#pragma once
#include "human.h"
#include <string>
#include <vector>

class Student : public Human {
public:

	void getdata() {
		Human::getdata();

		int temp = 0;
		int flag = 1;
		do {
			do {
				std::cout << "¬ведите оценку: ";
				std::cin >> temp;

				if (temp < 1 || temp > 5) {
					std::cout << "¬ведена некорректна€ оценка, повторите ввод" << std::endl;
				}
			} while (temp < 1 || temp > 5);

			scores.push_back(temp);
			std::cout << "¬ведите 0 чтобы закончить ввод оценок: ";
			std::cin >> flag;
		} while (flag);
	}

	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;

		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

	void putdata() {
		Human::putdata();
		std::cout << "—редний балл : " << get_average_score() << std::endl;
	}

private:
	std::vector<int> scores;
};
