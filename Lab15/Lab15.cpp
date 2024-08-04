#include <iostream>
#include <map>
#include <string>

struct StudentGrade {
    std::string name;
    char grade;
};

StudentGrade Input() {
    StudentGrade stud;
    std::cout << "Введите имя студента: ";
    std::cin >> stud.name;
    std::cout << "Введите оценку: ";
    std::cin >> stud.grade;
    return stud;
}

void Show(const StudentGrade& stud) {
    std::cout << stud.name << " - " << stud.grade << "\n";
}

int main() {
    system("chcp 1251");

    std::map<std::string, char> students;
    bool flag = true;

    while (flag) {
        StudentGrade stud = Input();

        if (students.count(stud.name) == 0) {
            students[stud.name] = stud.grade;
        }
        else {
            std::cout << "У студента уже стоит оценка." << std::endl;
        }

        std::cout << "Введите 1, чтобы продолжить ввод оценок, или 0, чтобы прекратить: ";
        std::cin >> flag;
    }

    for (const auto& element : students) {
        std::cout << "Фамилия: " << element.first << "\t\t" << "Оценка - " << element.second << std::endl;
    }

    return 0;
}
