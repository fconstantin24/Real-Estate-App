#include "Proprietate.h"
#include <string.h>
using namespace std;

Proprietate::Proprietate()
{
    strcpy(cod, "000000");
    valoare = 0;
} 

Proprietate::Proprietate(char m[], double n)
{
    if(strlen(m)!=0)
    {
        for(int i = 0 ; i < 6; i++)
        {
            this->cod[i] = m[i];
        }
        this->valoare = n;
    }
}

Proprietate::Proprietate(const Proprietate& m)
{
    valoare = m.valoare;

    if ( m.cod == NULL)
    {
        strcpy(cod, "000000");
    }
    else
    {
        strcpy (cod, m.cod);
    }

}

Proprietate& Proprietate::operator=(const Proprietate &m)
{
    this->valoare = m.valoare;

    for (int i = 0; i < 5; i++)
    {
        this->cod[i] = m.cod[i];
    }
}


Proprietate::~Proprietate()
{
    if (cod!=NULL) delete [] cod;
}

void Proprietate::citire()
{
    char aux[6];
    cin >> aux;
    //strcpy (cod, aux);

    cin >> valoare;

    for (int i = 0; i < 5; i++)
    {
        aux[i] = cod[i];
    }
}

void Proprietate::afisare() const
{
    cout << cod << " " << valoare << " ";
}

ostream& operator<<(ostream&, const Proprietate &)
{

}

istream& operator>>(istream&, Proprietate &)
{

}

double Proprietate::getVal()
{
    return this->valoare;
}

char* Proprietate::getCod()
{
    return this->cod;
}

void Proprietate::setVal(double pret)
{
    this->valoare = valoare;
}

void Proprietate::setCod(char cod[]) 
{
     for (int i = 0; i < 5; i++)
    {
        this->cod[i] = cod[i];
    }
}