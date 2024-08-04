#pragma once
#include "personFactory.h"
#include "student.h"

class StudentFactory : public PersonFactory {
public:
    Person* createPerson() override {
        std::string first_name;
        std::string last_name;
        std::string father_name;
        std::string phone_number;
        std::string number_group;
        std::string course;

        std::cout << "—оздание студента" << std::endl;
        std::cout << "¬ведите им€: "; std::cin >> first_name;
        std::cout << "¬ведите фамилию: "; std::cin >> last_name;
        std::cout << "¬ведите отчество: "; std::cin >> father_name;
        std::cout << "¬ведите номер телефона: "; std::cin >> phone_number;
        std::cout << "¬ведите название курса: "; std::cin >> course;
        std::cout << "¬ведите номер группы: "; std::cin >> number_group;

        return new Student(first_name, last_name, father_name, phone_number, number_group, course);
    }
};