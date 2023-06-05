#include "Person.h"
using namespace std;
#include <string>

Person::Person(const char *newName) : name(nullptr) {
  if (newName != nullptr) {
    int size = strlen(newName) + 1;
    this->name = new char[size];
    strncpy(this->name, newName, size);
  }
}
Person::~Person() {
  delete[] this->name;
  this->name = nullptr;
}

// friend just designates it in the declaration (header file)
// this is the actual implementation
std::ostream &operator<<(std::ostream &COUT, Person const &person) {
  COUT << "Hello, my name is " << person.name;
  return COUT;
}

void Person::setName(const char *name) {
  int size = strlen(name) + 1;
  this->name = new char[size];
  strncpy(this->name, name, size);
}

char *Person::getName() const { return this->name; }
