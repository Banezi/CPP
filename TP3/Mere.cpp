#include "Mere.h"
#include <iostream>
using namespace std;

int Mere::i = 0;

Mere::Mere()
{
    i++;
    cout << "Création d'une Mère" << endl;
    cout << "Nombre d'instance de Mère créés : " << i << endl;
}

Mere::Mere(string name) : nom(name)
{
    i++;
    cout << "Création d'une Mère avec paramètre" << endl;
    cout << "Nombre d'instance de Mère créés : " << i << endl;
}
Mere::~Mere()
{
    cout << "Destruction de Mère" << endl;
    i--;
}

int Mere::getAttribut()
{
    return i;
}

string Mere::getNom()
{
    return nom;
}

void Mere::afficher()
{
    cout << "L'objet est de classe Mère" << endl;
}
