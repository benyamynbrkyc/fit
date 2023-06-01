#include <iostream>

#include "Person.h"
#include "Util.h"

int main() {
    Person benjamin, ismir, berin, elma;
    benjamin.create("Benjamin", "Brk", 21);
    ismir.create("Ismir", "Brkic", 52);
    berin.create("Berin", "Brkic", 19);
    elma.create("Elma", "Brkic", 45);

    char benjaminFixedLastName[10];
    std::cout << "Fix Benjamin's last name. It's currently 'Brk' but it's supposed to be 'Brkic'" << std::endl;
    std::cin.getline(benjaminFixedLastName, 9);
    benjamin.setLastName(benjaminFixedLastName);

    benjamin.introduce();
    ismir.introduce();
    berin.introduce();
    elma.introduce();

    confirmExit();
    return 0;
}

void confirmExit() {
    std::cout << "Press enter to exit... ";
    std::cin.get();
}