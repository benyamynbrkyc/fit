#include <iostream>

#include "Person.h"

int main() {
  Person *benjamin = new Person("Benjamin");
  Person ismir("Ismir");

  std::cout << *benjamin << std::endl;
  std::cout << ismir << std::endl;

  return 0;
}