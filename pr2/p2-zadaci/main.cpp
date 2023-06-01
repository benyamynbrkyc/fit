#include <iostream>

#include "Date.h"
#include "Student.h"

int main() {
  Date *date = new Date(28, 2, 2002);

  // std::cout << date->getDay() << "/" << date->getMonth() << "/" <<
  // date->getYear() << std::endl; date->setDay(22); date->setMonth(9);
  // date->setYear(2004);
  // std::cout << date->getDay() << "/" << date->getMonth() << "/" <<
  // date->getYear() << std::endl;

  Student *student = new Student("Benjamin Brkic", *date, 21);

  student->introduce();

  return 0;
}