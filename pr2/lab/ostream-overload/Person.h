#ifndef PERSON_H
#define PERSON_H
#include <iostream>
class Person {

  char *name;

public:
  void setName(const char *name);
  char *getName() const;

  Person(const char *name);
  ~Person();

  friend std::ostream &operator<<(std::ostream &COUT, Person const &person);
};

#endif