#pragma once
#include "personFactory.h"
#include "teacher.h"

class TeacherFactory : public PersonFactory {
public:
    Person* createPerson() override {
        std::string first_name;
        std::string last_name;
        std::string father_name;
        std::string phone_number;
        std::string subject;

        std::cout << "Создание учителя" << std::endl;
        std::cout << "Введите имя: "; std::cin >> first_name;
        std::cout << "Введите фамилию: "; std::cin >> last_name;
        std::cout << "Введите отчество: "; std::cin >> father_name;
        std::cout << "Введите номер телефона: "; std::cin >> phone_number;
        std::cout << "Введите название предмета: "; std::cin >> subject;

        return new Teacher(first_name, last_name, father_name, phone_number, subject);
    }
};