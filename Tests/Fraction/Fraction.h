#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

#include <iostream>

class Fraction
{
private:
    int num;
    int denom;
public:
    Fraction(int n =0 , int d = 1);
    Fraction(Fraction const& f);
    void simplifie();
    bool operator==(Fraction const& f);
    bool operator>(Fraction const& f);
    bool operator<(Fraction const& f);
    friend std::ostream& operator<< (std::ostream& flux, const Fraction& f); // Fraction const& f?
    friend Fraction operator+ (Fraction const& f1, Fraction const& f2);
    friend Fraction operator* (Fraction const& f1, Fraction const& f2);
};

// pgcd est une fonction et non une méthode de la classe
int pgcd(int a, int b);

#endif // FRACTION_H_INCLUDED
