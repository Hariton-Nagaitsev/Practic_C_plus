#pragma once
#include <iostream>
#include "person.h"

class Teacher : public Person {
public:
    Teacher(
        const std::string& first_name,
        const std::string& last_name,
        const std::string& father_name,
        const std::string& phone_number,
        const std::string& subject)
        : Person(first_name, last_name, father_name, phone_number),
        subject(subject) {}

    void printDetails() const override {
        std::cout << "Преподаатель: " << getFullName()
            << "\nНомер телефона: " << getPhone()
            << "\nНазвание предмета: " << subject << std::endl;
    }

    std::string getStatus() const override {
        return "Teacher";
    }

private:
    std::string subject;
};