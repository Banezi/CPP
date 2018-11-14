#ifndef ZZ_H_INCLUDED
#define ZZ_H_INCLUDED

#include <iostream>
#include <string>

class ZZ
{
    std::string nom, prenom;
    int note;
    public:
    ZZ();
    ZZ (std::string name, std::string firstname, int n);
    bool operator<(const ZZ& zz2) const;
    friend std::ostream& operator<< (std::ostream&, const ZZ& zz);
};



#endif // ZZ_H_INCLUDED
