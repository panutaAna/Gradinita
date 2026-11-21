#ifndef NOU_H_INCLUDED
#define NOU_H_INCLUDED

using namespace std;

void copilNou() {
    ofstream c("Child.txt", ios::app);

    char nume[30], prenume[30];
    int grupa, zi, luna, an;

    cout << "Introduceti numele, prenumele, ziua, luna, anul si grupa:\n";
    cin >> nume >> prenume >> zi >> luna >> an >> grupa;

    c << nume << " " << prenume << " "
      << zi << " " << luna << " " << an
      << " " << grupa << endl;

    c.close();

    cout << "Copil adaugat!\n";
}

void grupaNoua() {
    ofstream g("Group.txt", ios::app);

    int nr;
    char denumire[30], ed1[30], ed2[30], dadaca[30];

    cout << "Introduceti numarul, denumirea, educatoarele si dadaca:\n";
    cin >> nr >> denumire >> ed1 >> ed2 >> dadaca;

    g << nr << " " << denumire << " "
      << ed1 << " " << ed2 << " " << dadaca << endl;

    g.close();

    cout << "Grupa adaugata!\n";
}

#endif