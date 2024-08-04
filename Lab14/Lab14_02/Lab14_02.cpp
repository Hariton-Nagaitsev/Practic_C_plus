#include <iostream>
#include <vector>
#include <list>
#include <set>

template <class T>
void Print(const T& container, const std::string& separator) {
    auto it = container.begin();
    if (it != container.end()) {
        std::cout << *it;
        ++it;
    }
    for (; it != container.end(); ++it) {
        std::cout << separator << *it;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data1 = { 1, 2, 3 };
    Print(data1, ", ");

    std::vector<char> data2 = { 'a', 'e', 't', 'r', '7' };
    Print(data2, ", ");

    std::vector<double> data3 = { 1.06, 2.89, 3.00, 45.5, -35 };
    Print(data3, ", ");

    std::list<std::string> data4 = { "Hello", "world", "!" };
    Print(data4, " ");

    std::set<int> data5 = { 10, 20, 30, 40, 50 };
    Print(data5, " - ");

    return 0;
}
