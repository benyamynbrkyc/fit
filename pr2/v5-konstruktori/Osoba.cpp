#include "Osoba.h"

#include <iostream>
#include <string>

Osoba::Osoba(const char ime[]) { this->setIme(ime); };

Osoba::~Osoba() {
  delete[] this->ime;
  this->ime = nullptr;
}

void Osoba::setIme(const char ime[]) {
  int velicina = strlen(ime) + 1;
  this->ime = new char[velicina];
  strncpy(this->ime, ime, velicina);
}

void Osoba::predstaviSe() {
  std::cout << "Cao cao, moje ime je " << this->ime
            << ". Drago mi je da smo se upoznali! :)" << std::endl;
}