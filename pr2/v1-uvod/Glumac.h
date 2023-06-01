#include "Datum.h"

struct Glumac {
  char _jmbg[14] = "";
  char *_ime = nullptr;
  char *_prezime = nullptr;
  Datum *_datumRodjenja = nullptr;
  char *_mjestoRodjenja = nullptr;
  char _drzava[100] = "";
  bool _spol; // 1:Muski, 0:Zenski
  // Z2.1
  void unos(const char *jmbg, const char *ime, const char *prezime,
            Datum &datumRodjenja, const char *mjestoRodjenja,
            const char *drzava, bool spol);
  // Z2.2
  void unos(Glumac &glumac);
  // Z2.3
  void setJmbg(const char *jmbg);
  // Z2.4
  void setIme(const char *ime);
  // Z2.5
  void setPrezime(const char *prezime);
  // Z2.6
  void setDatumRodjenja(Datum &datumRodjenja);
  // Z2.7
  void setMjestoRodjenja(const char *mjestoRodjenja);
  // Z2.8
  void setDrzava(const char *drzava);
  // Z2.9
  void setSpol(bool spol);
  // Z2.10
  const char *getJmbg();
  const char *getIme();
  const char *getPrezime();
  Datum &getDatumRodjenja();
  const char *getMjestoRodjenja();
  const char *getDrzava();
  bool getSpol();

  // Z2.11
  void ispis();
  // Z2.12
  void dealokacija();
};
