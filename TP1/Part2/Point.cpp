// Fichier Point.cpp

#include <iostream>
#include "Point.hpp"

using namespace std;

int Point::getX() {
  return x;
}

//Implementation de setX()
void Point::setX(int a)
{
    x = a;
}

int Point::getY()
{
    cout << compteur << endl; //possible
    return y;
}

void Point::setY(int b)
{
    y = b;
}
void Point::deplacerDe(int d)
{
    x+=d;
    y+=d;
}

void Point::deplacerVers(int a, int b)
{
    x=a;
    y=b;
}

Point::Point()
{
    cout << "Je suis le constructeur par defaut" << endl;
    x=0;
    y=0;
    compteur++;
}

Point::Point(int a, int b) : x(a), y(b)
{
    cout << "Je suis le constructeur parametré" << endl;
    compteur++;
}

int Point::getCompteur()
{
    //cout << x; impossible
    return compteur;
}

//Initialisation du compteur
int Point::compteur = 0;

int main(int, char**) {
  /*
  Point p;

  std::cout << p.getX();
  p.setX(5);
  std::cout <<"\n"<<p.getX() << endl;

  std::cout << "p(" << p.getX() << " , " << p.getY() << ")" << endl;
  p.deplacerVers(1,3);
  std::cout << "p(" << p.getX() << " , " << p.getY() << ")" << endl;
  p.deplacerDe(1);
  std::cout << "p(" << p.getX() << " , " << p.getY() << ")" << endl;
  */
  Point a;
  cout << "a(" << a.getX() << " , " << a.getY() << ")" << endl;
  Point b(4, 5);
  cout << "b(" << b.getX() << " , " << b.getY() << ")" << endl;

  Point *p = new Point;
  cout << "p ==> (" << p->getX() << " , " << p->getY() << ")" << endl;

  cout << "Nous avons " << Point::getCompteur() << " points crées" << endl;
  cout << "Nous avons " << a.getCompteur() << " points crées" << endl;
  cout << "Nous avons " << p->getCompteur() << " points crées" << endl;
  cout << a.getY() << endl;

  //cout << a.x; // x est private
  //cout << a.compteur;
  //cout << Point::compteur;

  return 0;
}
