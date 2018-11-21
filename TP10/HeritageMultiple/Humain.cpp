#include "Humain.hpp"

using namespace std;

Humain::Humain(const string& name, Genre g, int a) : nom(name), genre(g), age(a)
{
}

const char* Humain::getNom() const
{
    return nom.c_str();
}

Genre Humain::getGenre() const
{
    return genre;
}

int Humain::getAge() const
{
    return age;
}