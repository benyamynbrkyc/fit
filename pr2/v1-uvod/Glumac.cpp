#include "Glumac.h"
#include "Datum.h"
#include "string"

void Glumac::setJmbg(const char *jmbg) {
  strncpy(this->_jmbg, jmbg, 13);
  this->_jmbg[13] = '\0';
}

void Glumac::setIme(const char *ime) {
  int size = strlen(ime) + 1;
  this->_ime = new char[size];
  strncpy(this->_ime, ime, size);
}

void Glumac::setPrezime(const char *prezime) {
  int size = strlen(prezime) + 1;
  this->_prezime = new char[size];
  strncpy(this->_prezime, prezime, size);
}

void Glumac::setDatumRodjenja(Datum &datumRodjenja) {
  this->_datumRodjenja = new Datum;
  this->_datumRodjenja->unos(datumRodjenja);
}