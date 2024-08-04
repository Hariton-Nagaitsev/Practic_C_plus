#pragma once
#include "person.h"
#include <vector>
#include <iostream>
#include <fstream>

class Collection {
public:
    void addPerson(Person* person) {
        people.push_back(person);
    }

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (Person* person : people) {
                file << person->getStatus() << ": " << person->getFullName() << "," << person->getPhone() << std::endl;
            }
            file.close();
        }
        else {
            std::cerr << "Unable to open file" << std::endl;
        }
    }

private:
    std::vector<Person*> people;
};