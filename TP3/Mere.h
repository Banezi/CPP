#ifndef DEF_MERE
#define DEF_MERE

#include <string>

class Mere
{
private:

    static int i;
    std::string nom;
public:
Mere();
Mere(std::string name);
~Mere();
int getAttribut();
std::string getNom();
virtual void afficher();
};

#endif
