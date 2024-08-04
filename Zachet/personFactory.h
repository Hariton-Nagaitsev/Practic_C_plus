#pragma once
#include "person.h"

class PersonFactory {
public:
    virtual Person* createPerson() = 0;
};

