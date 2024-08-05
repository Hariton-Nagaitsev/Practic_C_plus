#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	system("chcp 1251");

	Human* stud = new Student;
	stud->getdata();
	stud->putdata();

	Human* tch = new Teacher;
	tch->getdata();
	tch->putdata();

	return 0;
}