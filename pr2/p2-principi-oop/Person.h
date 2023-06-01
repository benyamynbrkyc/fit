#ifndef PERSON_H
#define PERSON_H

class Person {
   private:
    char firstName[20];
    char* lastName;
    int age;

   public:
    void create(const char* firstName, const char* lastName, int age);

    void setFirstName(const char* firstName);
    const char* getFirstName();

    void setLastName(const char* lastName);
    const char* getLastName();

    void setAge(int age);
    const int getAge();

    void introduce();
    void celebrateBirthday();
};

#endif

// this infdef can be replaced by #pragma once