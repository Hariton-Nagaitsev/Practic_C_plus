#pragma once
#include <vector>
#include "collegues.h"

class Company {
public:
    void addColleague(Colleague* colleague) {
        colleagues.push_back(colleague);
    }
private:
    std::vector<Colleague*> colleagues;
};