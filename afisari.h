#ifndef AFISARI_H_INCLUDED
#define AFISARI_H_INCLUDED
using namespace std;

void Copii() {
    ifstream c("Child.txt");

    char nume[30], prenume[30];
    int grupa, zi, luna, an;

    cout<<"\n\033[32m------------------- Lista copiilor ---------------------\n\033[0m";
    cout<<left<<setw(15)<<"Nume"<<setw(20)<<"Prenume"<<setw(15)<<"Data"<<"Grupa"<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    while (c>>nume>>prenume>>zi>>luna>>an>>grupa) {
         cout<<left<<setw(15)<<nume<<setw(20)<<prenume;

        if (zi < 10) cout<<"0";
        cout<<zi<<"-";

        if (luna < 10) cout<<"0";
        cout<<luna<<"-"<<an;

        cout<<"     "<<grupa<<endl;
    }

    c.close();
}

void Grupe() {
	ifstream g("Group.txt");
	int nr;
	char denumire[30],ed1[30],ed2[30],dadaca[30];

	cout<<"\n\033[32m----------------------------- Lista grupelor -------------------------------\n\033[0m";
    cout<<left<<setw(8)<<"Nr"<<setw(15)<<"Denumire"<<setw(20) 
    <<"Educatoarea 1"<<setw(20)<<"Educatoarea 2"<<"Dădaca"<<endl;

    cout<< "----------------------------------------------------------------------------" <<endl;

	while (g>>nr>>denumire>>ed1>>ed2>>dadaca)
    cout<<left<<setw(8)<<nr<<setw(15)<<denumire<<setw(20)<<ed1<<setw(20)<<ed2<<dadaca<<endl;

	g.close();
}
#endif