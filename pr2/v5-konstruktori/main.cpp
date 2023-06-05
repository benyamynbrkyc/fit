#include <iostream>
#include <string>

using namespace std;

const char *crt = "\n----------------------------------------\n";

class Porez {
public:
  int poreska_skupina;
  float procenat;
  Porez(int skupina, float procenat);
};

class Artikal {
  Porez porez;
  float cijena;
  char naziv[20];
  float &c; // referenca na cijenu artikla
  const int artikalId;
  static int brojacArtikala;

public:
  Artikal(const char naziv[], float cijena, int skupina, float procenat);
  void printInfo();
  static int getBrojArtikala();
};

int Artikal::brojacArtikala = 1;

Porez::Porez(int skupina, float procenat) {
  this->poreska_skupina = skupina;
  this->procenat = procenat;
};

Artikal::Artikal(const char naziv[], float cij, int skupina, float procenat)
    : porez(skupina, procenat), c(cijena), artikalId(brojacArtikala++) {
  strncpy(this->naziv, naziv, 20);
  this->naziv[19] = '\0';
  this->cijena = cij;
}

void Artikal::printInfo() {
  cout << crt << "ID: " << Artikal::artikalId << endl;
  cout << "Naziv artikla: " << this->naziv << endl;
  cout << "Cijena artikla: " << this->cijena << endl;
  cout << "Referenca na cijenu: " << this->c << endl;
  cout << "Poreska skupina: " << this->porez.poreska_skupina << endl;
  cout << "Procenat na porez: " << this->porez.procenat << endl;
}

int Artikal::getBrojArtikala() { return Artikal::brojacArtikala; }

int main() {
  Artikal a1("Cipele", 120.20, 1, 17.0);
  Artikal a2("Hlace", 108.10, 2, 17.0);

  a1.printInfo();
  a2.printInfo();

  cout << crt << "Broj artikala napravljenih preko klase = "
       << Artikal::getBrojArtikala() << crt;

  cout << "Broj artikala preko objekta a1 = " << a1.getBrojArtikala() << crt;
  cout << "Broj artikala preko objekta a2 = " << a2.getBrojArtikala() << crt;

  cin.get();
  return 0;
}