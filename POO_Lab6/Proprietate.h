#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Proprietate {
protected: 
   char cod[6];
   double valoare;
//venitul generat de o proprietate pe luna e 0

    public:
        Proprietate();
        Proprietate(char [], double);
        Proprietate(const Proprietate &);
        Proprietate& operator=(const Proprietate &m);
        ~Proprietate();
        virtual void citire();
        virtual void afisare() const;
        friend ostream& operator<<(ostream&, const Proprietate &);            
        friend istream& operator>>(istream&, Proprietate &);
        char& operator[](int);
        double getVal();
        char* getCod();
        void setVal(double valoare);
        void setCod(char cod[]);
};