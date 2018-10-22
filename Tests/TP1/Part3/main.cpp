/*
#include <iostream>

using std::cout;
using std::endl;

/* on peut utiliser le mot clé const pour définir la taille d'un tableau statique en C++ *
const int TAILLE = 10;

int main(int, char **)
{
  int tab[TAILLE];

  for (int i=0; i < TAILLE; ++i) {
    tab[i] = i %2;
    cout << tab[i] << " ";
  }

  cout << endl;

  return TAILLE;
}
*/
#include <iostream>

using namespace std;

void echangePointeur(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void echangeReference(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}
int main(int, char**)
{
    int a = 2, b = 5;
    //echangePointeur(&a, &b);
    echangeReference(a,b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
