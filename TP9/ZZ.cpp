#include "ZZ.h"

using namespace std;

bool ZZ::operator<(const ZZ& zz2) const
{
    return note<zz2.note;
}

ostream& operator<< (ostream& flux, const ZZ& zz)
{
    flux << "Nom: " << zz.nom << " Prénom: " << zz.prenom << " Note: " << zz.note << endl;
    return flux;
}

ZZ::ZZ()
{}

ZZ::ZZ(string name, string firstname, int n) : nom(name), prenom(firstname), note(n)
{}

int ZZ::getNote() const
{
    return note;
}
