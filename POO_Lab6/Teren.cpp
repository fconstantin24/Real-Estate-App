#include "Teren.h"

Teren::Teren()
{
    venit_pe_luna_m2 = 0;
    suprafata = 0;
} 

Teren::Teren(double m, double n )
{
      if( m != 0 ) 
    {
        this->venit_pe_luna_m2 = m;
        this->suprafata = n;

    }
}

Teren::Teren(const Teren& m)
{
    venit_pe_luna_m2 = m.venit_pe_luna_m2;

    suprafata = m.suprafata;
}

Teren::Teren(Proprietate p, double venit_pe_luna_m2, double suprafata)
{
    this->venit_pe_luna_m2 = venit_pe_luna_m2;
    this->suprafata = suprafata;
    this->setCod(p.getCod());
    this->setVal(p.getVal());
}

Teren& Teren::operator=(const Teren &m)
{
    this->venit_pe_luna_m2 = m.venit_pe_luna_m2;
    this->suprafata = m.suprafata;
}


Teren::~Teren()
{
    if (venit_pe_luna_m2!=0) delete [] &venit_pe_luna_m2;
}

void Teren::citire()
{
    cin >> venit_pe_luna_m2;
    cin >> suprafata;
}

void Teren::afisare() const
{
    cout << venit_pe_luna_m2 << " " << suprafata;
    cout << endl;
}

ostream& operator<<(ostream&, const Teren &)
{

}

istream& operator>>(istream&, Teren &)
{

}

double Teren::getVenit_m2()
{
    return this->venit_pe_luna_m2;
}

void Teren::setVenit_m2(double venit_pe_luna_m2)
{
    this->venit_pe_luna_m2 = venit_pe_luna_m2;
}

double Teren::getSuprafata()
{
    return this->suprafata;
}

void Teren::setSuprafata(double suprafata)
{
    this->suprafata = suprafata;
}