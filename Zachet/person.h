#pragma once

class Person {
public:
    Person(
        const std::string& first_name,
        const std::string& last_name,
        const std::string& father_name,
        const std::string& phone_number) :
        first_name(first_name),
        last_name(last_name),
        father_name(father_name),
        phone_number(phone_number) {}

    virtual void printDetails() const = 0;

    virtual std::string getStatus() const = 0;

    std::string getFullName() const {
        return "Фамилия: " + last_name + " Имя: " + first_name + " Отчество: " + father_name;
    }

    std::string getPhone() const {
        return phone_number;
    }

private:
    std::string first_name;
    std::string last_name;
    std::string father_name;
    std::string phone_number;
};
