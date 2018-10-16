#ifndef CHAINE_HPP_INCLUDED
#define CHAINE_HPP_INCLUDED

#include <iostream>
#include <fstream>

class Chaine
{
    private:
        int taille;
        char* t; // tableau de caractères
    public:
        Chaine();
        Chaine(int t);
        Chaine(const char* ch);
        Chaine(const Chaine& ch);
        ~Chaine();
        Chaine& operator= (const Chaine&);
        int getCapacite() const;
        const char* c_str() const;
        void afficher();
        void afficher(std::stringstream ss);
};


#endif // CHAINE_HPP_INCLUDED
