#include "Person.h"

#include <iostream>

void Person::create(const char* firstName, const char* lastName, int age) {
    this->setFirstName(firstName);
    this->setLastName(lastName);
    this->setAge(age);
}

// setters

void Person::setFirstName(const char* firstName) {
    strncpy(this->firstName, firstName, 19);
    this->firstName[19] = '\0';
}

void Person::setLastName(const char* lastName) {
    int size = strlen(lastName) + 1;
    this->lastName = new char[size];
    strncpy(this->lastName, lastName, size);
}

void Person::setAge(int age) {
    this->age = age;
}

// getters

const char* Person::getFirstName() {
    return this->firstName;
}

const char* Person::getLastName() {
    return this->lastName;
}

const int Person::getAge() {
    return this->age;
}

// behavior

void Person::introduce() {
    std::cout << "Hello, my name is " << this->getFirstName() << " " << this->getLastName() << ". I am " << this->getAge() << " years old." << std::endl;
}

void Person::celebrateBirthday() {
    int age = this->getAge();

    this->setAge(age + 1);

    std::cout << "Today is my birthday and I brought cake for everybody!!\nI am now " << this->age << " years old!" << std::endl;
}