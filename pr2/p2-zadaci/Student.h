#ifndef STUDENT_H
#define STUDENT_H

#include "Date.h"

// #include <string>

class Student {
  char *fullName;
  Date dateOfBirth;
  int age;

public:
  Student(const char *fullName, const Date &dateOfBirth, const int age);

  // setters
  void setFullName(const char *fullName);
  void setDateOfBirth(const Date &date);
  void setAge(const int age);
  // getters
  char *getFullName() const;
  Date getDateOfBirth() const;
  int getAge() const;

  void introduce();
};

#endif