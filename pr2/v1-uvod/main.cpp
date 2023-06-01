#include <iostream>
using namespace std;

#include "Datum.h"

// Z0.1
char *alocirajTekst(const char *tekst) {
  // implementirati funkciju
  return nullptr;
}

// Z1.10
bool areEqual(Datum &d1, Datum &d2) {
  // implementirati funkciju
  return false;
}
// Z1.11
Datum &getStarijiDatum(Datum &d1, Datum &d2) {
  // implementirati funkciju
  return d1;
}
// Z1.12
Datum &getNovijiDatum(Datum &d1, Datum &d2) {
  // implementirati funkciju
  return d1;
}
// Z1.13
Datum *getNajstarijiDatum(Datum datumi[], int size) {
  // implementirati funkciju
  return nullptr;
}
// Z1.14
Datum *getNajnovijiDatum(Datum datumi[], int size) {
  // implementirati funkciju
  return nullptr;
}

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
            const char *drzava, bool spol) {
    // implementirati funkciju
  }
  // Z2.2
  void unos(Glumac &glumac) {
    // implementirati funkciju
  }
  // Z2.3
  void setJmbg(const char *jmbg) {
    // implementirati funkciju
  }
  // Z2.4
  void setIme(const char *ime) {
    // implementirati funkciju
  }
  // Z2.5
  void setPrezime(const char *prezime) {
    // implementirati funkciju
  }
  // Z2.6
  void setDatumRodjenja(Datum &datumRodjenja) {
    // implementirati funkciju
  }
  // Z2.7
  void setMjestoRodjenja(const char *mjestoRodjenja) {
    // implementirati funkciju
  }
  // Z2.8
  void setDrzava(const char *drzava) {
    // implementirati funkciju
  }
  // Z2.9
  void setSpol(bool spol) {
    // implementirati funkciju
  }
  // Z2.10
  const char *getJmbg() {
    // implementirati funkciju
    return nullptr;
  }
  const char *getIme() {
    // implementirati funkciju
    return nullptr;
  }
  const char *getPrezime() {
    // implementirati funkciju
    return nullptr;
  }
  Datum &getDatumRodjenja() { return *_datumRodjenja; }
  const char *getMjestoRodjenja() {
    // implementirati funkciju
    return nullptr;
  }
  const char *getDrzava() {
    // implementirati funkciju
    return nullptr;
  }
  bool getSpol() {
    // implementirati funkciju
    return false;
  }

  // Z2.11
  void ispis() {
    // implementirati funkciju
  }
  // Z2.12
  void dealokacija() {
    // implementirati funkciju
  }
};

struct Film {
  char _filmID[50] = ""; // prema ISAN standardu
  char *_naziv = nullptr;
  char _zanr[40] = "";
  int _godinaIzlaska;
  int _trenutnoGlumaca = 0;
  Glumac _glumackaPostava[20];
  int _trenutnoOcjena = 0;
  int *_ocjene =
      nullptr; // Dinamicki prosirivati ovaj niz svakim novim dodavanjem
  // Z3.1
  void unos(const char *filmID, const char *naziv, const char *zanr,
            int godinaIzlaska) {
    // implementirati funkciju
  }
  // Z3.2
  void unos(Film &film) {
    // implementirati funkciju
  }

  // Z3.3
  void setFilmID(const char *filmID) {
    // implementirati funkciju
  }
  // Z3.4
  void setNaziv(const char *naziv) {
    // implementirati funkciju
  }
  // Z3.5
  void setZanr(const char *zanr) {
    // implementirati funkciju
  }
  // Z3.6
  void setGodinaIzlaska(int godinaIzlaska) {
    // implementirati funkciju
  }

  // Z3.7
  void setGlumackaPostava(Glumac *_glumci, int velicina) {
    // implementirati funkciju
  }
  // Z3.8
  void setOcjene(int *ocjene, int velicina) {
    // implementirati funkciju
  }
  // Z3.9 :: implementirati sljedece funkcije
  const char *getFilmID() { return nullptr; }
  const char *getNaziv() { return nullptr; }
  const char *getZanr() { return nullptr; }
  int getGodinaIzlaska() { return 0; }
  int getTrenutnoGlumaca() { return 0; }
  Glumac *getGlumackaPostava() { return nullptr; }
  int getTrenutnoOcjena() { return 0; }
  int *getOcjene() { return nullptr; }

  // Z3.10
  bool DodajGlumca(Glumac &g) {
    // implementirati funkciju
    return false;
  }

  // Z3.11
  bool DodajOcjenu(int ocjena) {
    // implementirati funkciju
    return false;
  }

  // Z3.12
  void ispis() {
    // implementirati funkciju
  }

  // Z3.13
  float getProsjecnaOcjena() {
    // implementirati funkciju
    return 0.0f;
  }

  // Z3.14
  void dealokacija() {
    // implementirati funkciju
  }
};

void Zadatak1() {
  cout << ":Zadatak 1:" << endl;
  Datum prviMart, danNezavisnosti, danDrzavnosti;
  prviMart.unos(1, 3, 2021);
  danNezavisnosti.unos(prviMart);
  danDrzavnosti.unos(&prviMart);
  danDrzavnosti.setDan(25);
  danDrzavnosti.setMjesec(11);
  danDrzavnosti.setGodina(2021);

  cout << "Dan nezavisnosti: " << endl;
  danNezavisnosti.ispis();
  cout << endl << "Dan drzavnosti: " << endl;
  danDrzavnosti.ispis();
  prviMart.dealokacija();
  danNezavisnosti.dealokacija();
  danDrzavnosti.dealokacija();

  Datum danD, operacijaBarbarossa, sarajevskiAtentat, apolloSlijetanje,
      blackThursday;
  danD.unos(6, 6, 1944);
  operacijaBarbarossa.unos(22, 6, 1941);
  sarajevskiAtentat.unos(28, 6, 1914);
  apolloSlijetanje.unos(24, 7, 1969);
  blackThursday.unos(24, 10, 1929);

  Datum historijskiDogadjaji[5];
  historijskiDogadjaji[0].unos(danD);
  historijskiDogadjaji[1].unos(operacijaBarbarossa);
  historijskiDogadjaji[2].unos(sarajevskiAtentat);
  historijskiDogadjaji[3].unos(apolloSlijetanje);
  historijskiDogadjaji[4].unos(blackThursday);

  cout << endl << "Najstariji datum: " << endl;
  getNajstarijiDatum(historijskiDogadjaji, 5)->ispis();
  cout << endl << "Najnoviji datum: " << endl;
  getNajnovijiDatum(historijskiDogadjaji, 5)->ispis();

  // DEALOKACIJE
  danD.dealokacija();
  operacijaBarbarossa.dealokacija();
  sarajevskiAtentat.dealokacija();
  apolloSlijetanje.dealokacija();
  blackThursday.dealokacija();
  for (int i = 0; i < 5; i++)
    historijskiDogadjaji[i].dealokacija();
  cout << endl << "dealokacija uspjesna!" << endl;
}
void Zadatak2() {
  cout << ":Zadatak 2:" << endl;

  Glumac alPacino, deNiro;
  Datum temp1, temp2;
  temp1.unos(25, 4, 1940);
  temp2.unos(17, 8, 1943);
  alPacino.unos("1304996055555", "Alfredo", "Pacino", temp1, "Manhattan, NYC",
                "SAD", 1);
  deNiro.unos(alPacino);
  deNiro.setIme("Robert");
  deNiro.setPrezime("De Niro");
  deNiro.setDatumRodjenja(temp2);
  deNiro.setMjestoRodjenja("Greenwich Village");
  deNiro.setDrzava("SAD");
  deNiro.setSpol(1);

  Datum datumi[5];
  datumi[0].unos(7, 6, 1995);
  datumi[1].unos(7, 11, 1991);
  datumi[2].unos(3, 6, 1995);
  datumi[3].unos(5, 6, 1992);
  datumi[4].unos(1, 6, 1993);
  Glumac glumciNarodnogPozorista[5];
  glumciNarodnogPozorista[0].unos("0706995088888", "Barb", "Dwyer", datumi[0],
                                  "Mostar", "BiH", 1);
  glumciNarodnogPozorista[1].unos("0711991144488", "Anna", "Graham", datumi[1],
                                  "Ostrozac", "BiH", 0);
  glumciNarodnogPozorista[2].unos("0306995099999", "Benjamin", "Button",
                                  datumi[2], "Sarajevo", "BiH", 1);
  glumciNarodnogPozorista[3].unos("0506992011993", "Jack", "Pott", datumi[3],
                                  "Vogosca", "BiH", 1);
  glumciNarodnogPozorista[4].unos("0106993094444", "Justin", "Case", datumi[4],
                                  "Kotor-Varos", "BiH", 1);

  cout << "ispis svih glumaca:: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << "-----------------------------------------------" << endl;
    glumciNarodnogPozorista[i].ispis();
  }
  cout << "-----------------------------------------------" << endl;
  cout << endl;

  // DEALOKACIJE
  temp1.dealokacija();
  temp2.dealokacija();
  alPacino.dealokacija();
  deNiro.dealokacija();
  for (int i = 0; i < 5; i++) {
    datumi[i].dealokacija();
    glumciNarodnogPozorista[i].dealokacija();
  }
  cout << "dealokacija uspjesna!" << endl;
}

void Zadatak3() {
  Datum temp1, temp2;
  temp1.unos(25, 4, 1940);
  temp2.unos(17, 8, 1943);
  Glumac alPacino, deNiro;
  alPacino.unos("2504940555551", "Alfredo", "Pacino", temp1, "Manhattan, NYC",
                "SAD", 1);
  deNiro.unos("1708943055555", "Robert", "De Niro", temp2, "NYC", "SAD", 1);

  Film irishman;
  irishman.unos("XXXX-AAAA-BBBB-CCCC", "The Irishman",
                "Biografija, krimi, drama", 2019);
  irishman.DodajGlumca(alPacino);
  irishman.DodajGlumca(deNiro);
  irishman.DodajOcjenu(10);
  irishman.DodajOcjenu(8);
  irishman.DodajOcjenu(9);
  irishman.DodajOcjenu(8);
  irishman.DodajOcjenu(8);
  irishman.DodajOcjenu(7);
  irishman.DodajOcjenu(10);

  Film kopija;
  kopija.unos(irishman);
  kopija.ispis();
  // DEALOKACIJE
  irishman.dealokacija();
  kopija.dealokacija();
  alPacino.dealokacija();
  deNiro.dealokacija();
  temp1.dealokacija();
  temp2.dealokacija();
  cout << endl << "dealokacija uspjesna!" << endl;
}

void Menu() {
  int nastaviDalje = 1;
  while (nastaviDalje == 1) {
    int izbor = 0;
    do {
      system("cls");
      cout << "::Zadaci::" << endl;
      cout << "(1) Zadatak 1" << endl;
      cout << "(2) Zadatak 2" << endl;
      cout << "(3) Zadatak 3" << endl;
      cout << "Unesite odgovarajuci broj zadatka za testiranje: -->: ";
      cin >> izbor;
      cout << endl;
    } while (izbor < 1 || izbor > 3);
    switch (izbor) {
    case 1:
      Zadatak1();
      cout << "Done." << endl;
      break;
    case 2:
      Zadatak2();
      cout << "Done." << endl;
      break;
    case 3:
      Zadatak3();
      cout << "Done." << endl;
      break;
    default:
      break;
    }
    do {
      cout << "DA LI ZELITE NASTAVITI DALJE? (1/0): ";
      cin >> nastaviDalje;
    } while (nastaviDalje != 0 && nastaviDalje != 1);
  }
}

int main() {
  Menu();
  return 0;
}