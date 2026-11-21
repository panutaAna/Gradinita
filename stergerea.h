#ifndef STERGEREA_H_INCLUDED
#define STERGEREA_H_INCLUDED

#include <cstring>
using namespace std;

void stergeCopil() {
    ifstream c("Child.txt");
    ofstream t("temporar.txt");

    char nume[30], prenume[30];
    char numeSters[30], prenumeSters[30];
    int grupa, zi, luna, an, gasit = 0;

    cout << "Introduceti numele si prenumele copilului:\n";
    cin >> numeSters >> prenumeSters;

    while (c >> nume >> prenume >> zi >> luna >> an >> grupa) {
        if (strcmp(nume, numeSters) == 0 &&
            strcmp(prenume, prenumeSters) == 0) {
            gasit = 1;
        } else {
            t << nume << " " << prenume << " "
              << zi << " " << luna << " " << an
              << " " << grupa << endl;
        }
    }

    c.close();
    t.close();

    remove("Child.txt");
    rename("temporar.txt", "Child.txt");

    if (gasit)
        cout << "Copil sters!\n";
    else
        cout << "Copilul nu a fost gasit!\n";
}

void stergeGrupa() {
    ifstream g("Group.txt");
    ofstream t("temporar.txt");

    int nr, nrSters, gasit = 0;
    char denumire[30], ed1[30], ed2[30], dadaca[30];

    cout << "Introduceti numarul grupei:\n";
    cin >> nrSters;

    while (g >> nr >> denumire >> ed1 >> ed2 >> dadaca) {
        if (nr == nrSters) {
            gasit = 1;
        } else {
            t << nr << " " << denumire << " "
              << ed1 << " " << ed2 << " " << dadaca << endl;
        }
    }

    g.close();
    t.close();

    remove("Group.txt");
    rename("temporar.txt", "Group.txt");

    if (gasit)
        cout << "Grupa stearsa!\n";
    else
        cout << "Grupa nu a fost gasita!\n";
}

#endif