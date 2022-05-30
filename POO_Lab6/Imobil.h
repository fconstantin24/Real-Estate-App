#include "Proprietate.h"
#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Imobil : public Proprietate{
    double venit_pe_an; //venitul generat de imobil prin inchiriere pe an
    char *imbunatatiri; // lista cu imbunatatiri, ex:  centrala, parc in apropiere, etc
  // venitul generat de un imobil pe luna este venit_pe_an/12

    public:
        Imobil();
        Imobil(double, char *);
        Imobil(const Imobil &);
        Imobil(Proprietate p, double venit_pe_an, char *imbunatatiri);
        Imobil& operator=(const Imobil &);
        ~Imobil();
        virtual void citire();
        virtual void afisare() const;
        friend ostream& operator<<(ostream&, const Imobil &);            
        friend istream& operator>>(istream&, Imobil &);
        char& operator[](int);
        char* getImbunatatiri();
        void setImbunatatiri(char*);
        double getVenit();
        void setVenit(double );
};
