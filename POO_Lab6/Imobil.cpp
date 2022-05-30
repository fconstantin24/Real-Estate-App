#include "Imobil.h"

Imobil::Imobil()
{
    venit_pe_an = 0;
    imbunatatiri = NULL;
} 

Imobil::Imobil(double n, char* m)
{
      if(strlen(m)!=0)
    {
        this->venit_pe_an = n;

        imbunatatiri = new char[20];
        strcpy(imbunatatiri,m);   

    }
}

Imobil::Imobil(const Imobil& m)
{
    venit_pe_an = m.venit_pe_an;

    if ( m.imbunatatiri == NULL)
    {
        imbunatatiri = NULL;
    }
    else{
        imbunatatiri = new char[20];
        strcpy (imbunatatiri, m.imbunatatiri);
    }
}

Imobil::Imobil(Proprietate p, double venit_pe_an, char * imbunatatiri)
{
    this->venit_pe_an = venit_pe_an;
    this->imbunatatiri = imbunatatiri;
    this->setCod(p.getCod());
    this->setVal(p.getVal());
}


Imobil& Imobil::operator=(const Imobil &m)
{
    this->venit_pe_an = m.venit_pe_an;

     if ( imbunatatiri == NULL)
    {
        this->imbunatatiri = NULL;
    }
    else{
        this->imbunatatiri = new char[20];
        strcpy (this->imbunatatiri, m.imbunatatiri);
    }
}


Imobil::~Imobil()
{
    if (imbunatatiri!=NULL) delete [] imbunatatiri;
}

void Imobil::citire()
{
    cin >> venit_pe_an;
    char aux[20];
    cin >> aux;
    imbunatatiri = new char[20];
    strcpy (imbunatatiri, aux);

}

void Imobil::afisare() const
{
    cout << venit_pe_an << imbunatatiri << " ";
}

ostream& operator<<(ostream&, const Imobil &)
{

}

istream& operator>>(istream&, Imobil &)
{

}

double Imobil::getVenit()
{
    return this->venit_pe_an;
}

void Imobil::setVenit(double venit_pe_an)
{
    this->venit_pe_an = venit_pe_an;
}

char* Imobil::getImbunatatiri() 
{
    return this->imbunatatiri;
}

void Imobil::setImbunatatiri(char* imbunatatiri)
{
    this->imbunatatiri = imbunatatiri;
}