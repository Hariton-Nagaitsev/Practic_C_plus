#pragma once
#include "person.h"
#include <iostream>

class Colleague : public Person {
public:
    Colleague(
        const std::string& first_name,
        const std::string& last_name,
        const std::string& father_name,
        const std::string& phone_number,
        const std::string& company)
        : Person(first_name, last_name, father_name, phone_number),
        company(company) {}

    void printDetails() const override {
        std::cout << "Коллега: " << getFullName()
            << "\nНомер телефона: " << getPhone()
            << "\nНазвание компании: " << company << std::endl;
    }

    std::string getStatus() const override {
        return "Colleague";
    }

private:
    std::string company;
};