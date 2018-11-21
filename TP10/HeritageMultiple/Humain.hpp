#ifndef Humain_H_INCLUDED
#define Humain_H_INCLUDED

#include <iostream>
#include <string>

enum Genre {HOMME, FEMME}; //version C++ 2003
//enum class Genre {HOMME, FEMME}; // C++11

class Humain
{
    protected:
    std::string nom;
    Genre genre;
    int age;
    public:
    Humain();
    Humain(const std::string& name, Genre g, int a);
    const char* getNom() const;
    Genre getGenre() const;
    int getAge() const;
    //~Humain();

};

#endif // Humain_H_INCLUDED