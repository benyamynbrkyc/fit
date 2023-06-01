#include "Datum.h"
#include <iostream>

using namespace std;

void Datum::unos(int d, int m, int g) {
  _dan = new int(d);
  _mjesec = new int(m);
  _godina = new int(g);
}

void Datum::unos(Datum &datum) {
  _dan = new int(datum.getDan());
  _mjesec = new int(datum.getMjesec());
  _godina = new int(datum.getGodina());
}

int Datum::getDan() { return *(this->_dan); }

int Datum::getMjesec() { return *(this->_mjesec); }

int Datum::getGodina() { return *(this->_godina); }

void Datum::setDan(int dan) { this->_dan = new int(dan); }

void Datum::setMjesec(int mjesec) { this->_mjesec = new int(mjesec); }

void Datum::setGodina(int godina) { this->_godina = new int(godina); }

void Datum::ispis() {
  cout << "Danasnji datum: " << this->getDan() << "/" << this->getMjesec()
       << "/" << this->getGodina() << endl;
}

void Datum::dealokacija() {
  delete _dan;
  delete _mjesec;
  delete _godina;
  _dan = nullptr;
  _mjesec = nullptr;
  _godina = nullptr;
}
