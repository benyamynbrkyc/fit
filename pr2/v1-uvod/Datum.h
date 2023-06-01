#ifndef DATUM_H
#define DATUM_H

struct Datum {
  int *_dan{nullptr};
  int *_mjesec{nullptr};
  int *_godina{nullptr};

  void unos(int d, int m, int g);
  void unos(Datum &datum);
  void unos(Datum *datum);

  int getDan();
  int getMjesec();
  int getGodina();

  void setDan(int dan);

  void setMjesec(int mjesec);

  void setGodina(int godina);

  void ispis();

  void dealokacija();
};

#endif