//#include "Proprietate.h"
#include "Imobil.h"
#include "Teren.h"
#include <iostream>
#include <cstring>
//#include <vector>
/*
typedef struct {
    Proprietate p;
    Imobil i;
    Teren t;
    double venit;
}Vector;
*/

using namespace std;

//char *obiect;
int n;
Proprietate **v;
//double venit;
//vector<Vector> v;


 void sortare ()
    {
     for (int i = 0; i < n - 1; i++)
         {
             for (int j = i + 1; j < n; j++)
             {  
                 if ((*v)[i].getVal() > (*v)[j].getVal())
                 {
                     Proprietate *aux;
                     *aux = (*v)[i];
                     (*v)[j] = (*v)[i];
                     v[i] = aux;
                 }
             }
         }

    }

    void afisare_selectiva ()
    {
     for (int i = 0; i < n; i++)
         {
            if( (*v)[i].getVal() > 10000 )
                (*v)[i].afisare();
         }

    }


int main() 
{  
    Proprietate p("a1b1c", 1000);

    Proprietate p1("d1b1c", 3000);
    Imobil i(p1, 50.5, " centrala ");

    Proprietate p2("b1b1c", 2000);
    Teren t(p2, 30.5, 800.3);

    p.afisare();
    cout << endl;
    p1.afisare();
    i.afisare();
    cout << endl;
    p2.afisare();
    t.afisare();
    cout << endl;

    
    cout << "n=";
    cin >> n;
    cout << "S-a citit n\n";
    //**v = new * Proprietate[n];

Proprietate** v;
v = new Proprietate*[n]; 

    char cod[6];
    double valoare;
    double venit_pe_an;
    char imbunatatiri[30];
    double venit_pe_luna_m2;
    double suprafata;

/*
    if(strstr(obiect, "proprietate") != NULL)
        venit = 0;
    if(strstr(obiect, "imobil") != NULL)
        venit = venit_pe_an/12;
    if(strstr(obiect, "teren") != NULL)
        venit = venit_pe_luna_m2*suprafata;
*/


     for (int i = 0; i < n; i++)
     { 
            cout << "Cod: ";
            for ( int j = 0; j <5; j++)
            {
                cin >> cod[j];
                cout << "da ";
            }
            cout << "nu ";
            (*v)[i].setCod(cod);
            cout << "poate";
            cout << endl << "Valoare: ";
            cin >> valoare;
            (*v)[i].setVal(valoare);
     }

    for (int i = 0; i < n; i++)
    {
        cout << (*v)[i].getCod() << " " << (*v)[i].getVal() << endl;
        //v[i].afisare()
    }

     sortare ();
    cout << " afisare dupa sortare " << endl;
    for (int i = 0; i < n; i++)
     {  

        //v[i].afisare();
        cout << (*v)[i].getCod()<< " " << (*v)[i].getVal() << endl;
     }

    cout << endl;

     afisare_selectiva ();
     cout << " afisare selectiva " << endl;
     for (int i = 0; i < n; i++)
     {  
        cout << (*v)[i].getCod()<< " " << (*v)[i].getVal() << endl;
        //v[i].afisare();
     }

    return 0;
}