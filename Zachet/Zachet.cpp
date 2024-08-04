#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "collection.h"
#include "personFactory.h"
#include "teacherFactory.h"
#include "studentFactory.h"
#include "colleagueFactory.h"
#include "company.h"


int main()
{
    system("chcp 1251");

    Collection collection;
    PersonFactory* studentFactory = new StudentFactory();
    PersonFactory* teacherFactory = new TeacherFactory();
    PersonFactory* colleagueFactory = new ColleagueFactory();

    Company company;

    Person* student1 = studentFactory->createPerson();
    Person* teacher1 = teacherFactory->createPerson();
    Person* colleague1 = colleagueFactory->createPerson();

    collection.addPerson(student1);
    collection.addPerson(teacher1);
    collection.addPerson(colleague1);

    collection.saveToFile("Persons.txt");

    delete studentFactory;
    delete teacherFactory;
    delete colleagueFactory;
    delete student1;
    delete teacher1;
    delete colleague1;

    return 0;
}

