#include "Student.h"

#include <iostream>
#include <string>

#include "Date.h"

Student::Student(const char *fullName, const Date &dateOfBirth, const int age) {
  this->setFullName(fullName);
  this->setDateOfBirth(dateOfBirth);
  this->setAge(age);
}

// setters

void Student::setFullName(const char *fullName) {
  int size = strlen(fullName) + 1;
  this->fullName = new char[size];
  strncpy(this->fullName, fullName, size);
}

void Student::setAge(int age) { this->age = age; }

void Student::setDateOfBirth(const Date &date) { this->dateOfBirth = date; }

// getters

Date Student::getDateOfBirth() const { return this->dateOfBirth; }

char *Student::getFullName() const { return this->fullName; }

int Student::getAge() const { return this->age; }

void Student::introduce() {
  std::cout << "My name is " << this->fullName << ". My birthday is on "
            << this->getDateOfBirth().getDay() << "/"
            << this->getDateOfBirth().getMonth() << "/"
            << this->getDateOfBirth().getYear() << ". I am currently "
            << this->age << " years old." << std::endl;
}