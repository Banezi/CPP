#include "Fille.h"
#include "Mere.h"
#include <iostream>
using namespace std;

Fille::Fille() : Mere()
{
    cout << "Création d'une Fille" << endl;
    cout << "Appel du constructeur de Mere : ";
}

Fille::Fille(string name):Mere(name)
{
}

Fille::~Fille()
{
    cout << "Destruction de Fille" << endl;
}

void Fille::afficher()
{
    cout << "L'objet est de classe Fille" << endl;
 }

