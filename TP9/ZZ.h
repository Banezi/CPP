#ifndef ZZ_H_INCLUDED
#define ZZ_H_INCLUDED

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ZZ
{
    std::string nom, prenom;
    int note;
    public:
    ZZ();
    ZZ (std::string name, std::string firstname, int n);
    int getNote() const;
    bool operator<(const ZZ& zz2) const;
    friend std::ostream& operator<< (std::ostream&, const ZZ& zz);
};

class ComparateurNotes
{
    public:
    bool operator()(const ZZ& zz1, const ZZ& zz2)
    {
        return zz1.getNote()<zz2.getNote();
    }
};

class Rand_0_100
{
    public:
    int operator()()
    {
        return rand()%101;
    }
};

#endif // ZZ_H_INCLUDED
