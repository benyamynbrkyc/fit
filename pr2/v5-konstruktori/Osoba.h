#ifndef OSOBA_H
#define OSOBA_H

class Osoba {
public:
  char *ime;

  Osoba(const char ime[]);
  ~Osoba();

  void setIme(const char ime[]);

  void predstaviSe();
};

#endif