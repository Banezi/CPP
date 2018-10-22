#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int n, int d) : num(n), denom(d)
{
    simplifie();
}

Fraction::Fraction(Fraction const& f) : num(f.num), denom(f.denom)
{
    simplifie();
}

void Fraction::simplifie()
{
    int n = pgcd(num, denom);
    num /= n;
    denom /= n;
}


/* ------------------------------------------- */
/* pgcd : Calcul le PGCD de 2 nombres entiers  */
/*                                             */
/* NB: c'est une fonction et non une méthode   */
/*     de la classe Fraction                   */
/* ------------------------------------------- */
int pgcd(int a, int b)
{
    while (b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}

/* ------------------------------------------- */
/* Surcharge de l'operateur <<                 */
/* ------------------------------------------- */
ostream& operator<< (std::ostream& flux, const Fraction& f)
{
    if(f.num==0)
        flux << f.num;
    else if(f.denom==1)
        flux << f.num;
    else
        flux << f.num << "/" << f.denom;
    return flux;
}

/* ------------------------------------------- */
/* Surcharge de l'operateur +                  */
/* ------------------------------------------- */
Fraction operator+ (Fraction const& f1, Fraction const& f2)
{
    Fraction resulat;
    resulat.num = f1.num*f2.denom + f1.denom*f2.num;
    resulat.denom = f1.denom * f2.denom;
    resulat.simplifie();
    return resulat;
}

/* ------------------------------------------- */
/* Surcharge de l'operateur *                  */
/* ------------------------------------------- */
Fraction operator* (Fraction const& f1, Fraction const& f2)
{
    Fraction resulat;
    resulat.num = f1.num * f2.num;
    resulat.denom = f1.denom * f2.denom;
    resulat.simplifie();
    return resulat;
}

bool Fraction::operator==(Fraction const& f)
{
    return (num==f.num && denom==f.denom);
}

bool Fraction::operator>(Fraction const& f)
{
    return ((double) num/(double) denom > (double) f.num/(double) f.denom);
}

bool Fraction::operator<(Fraction const& f)
{
    return !(*this==f || *this > f);
}
