#include "Proprietate.h"
#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Teren : public Proprietate{
    double venit_pe_luna_m2; //venitul generat de imobil prin inchiriere pe luna a unui metru patrat
    double suprafata; //in metrii patrati
// venitul generat de un teren pe luna este venit_pe_luna_m2*suprafata

    public:
        Teren();
        Teren(double, double);
        Teren(const Teren &);
        Teren(Proprietate p, double venit_pe_luna_m2, double suprafata);
        Teren& operator=(const Teren &);
        ~Teren();
        virtual void citire();
        void afisare() const;
        friend ostream& operator<<(ostream&, const Teren &);            
        friend istream& operator>>(istream&, Teren &);
        char& operator[](int);
        double getVenit_m2();
        void setVenit_m2(double);
        double getSuprafata();
        void setSuprafata(double);
        
};