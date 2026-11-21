#include <iostream>
#include <fstream>
#include <iomanip>

#include "afisari.h"
#include "nou.h"
#include "stergerea.h"
using namespace std;

int main() {
    int varianta;

    do {
        cout << "\n--- MENIU GRADINITA ---\n";
        cout << "1. Afisarea tuturor copiilor\n";
        cout << "2. Afisarea tuturor grupelor\n";
        cout << "3. Adaugarea unui copil nou\n";
        cout << "4. Adaugarea unei grupe noi\n";
        cout << "5. Stergerea unui copil\n";
        cout << "6. Stergerea unei grupe\n";
        cout << "0. Iesire\n";
        cout << "Alegeti optiunea: ";
        cin >> varianta;

        switch (varianta) {
            case 1: Copii(); break;
            case 2: Grupe(); break;
            case 3: copilNou(); break;
            case 4: grupaNoua(); break;
            case 5: stergeCopil(); break;
            case 6: stergeGrupa(); break;
            case 0: cout << "Ati iesit din program.\n"; break;
            default: cout << "Optiune invalida!\n";
        }

    } while (varianta != 0);

    return 0;
}