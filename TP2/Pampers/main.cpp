#include <iostream>

using namespace std;

class Bavarde {
  private:
    int x;
  public :
    Bavarde(int a=0);
    ~Bavarde();
    int get();
    void afficher();
} bizarre(1);

Bavarde::Bavarde(int a) : x(a)
{
    cout << "Construction de " << a << endl;
}

Bavarde::~Bavarde()
{
    cout << "Tais-toi " << x << endl;
}

int Bavarde::get()
{
    return x;
}

void Bavarde::afficher()
{
    cout << "Affichage de " << x << endl;
}

Bavarde globale(2);

void fonction(Bavarde b) {
  cout << "code de la fonction";
}


// Classe Couple
class Couple
{
    Bavarde a;
    Bavarde b;
    public:
    Couple(Bavarde x, Bavarde y);
};

Couple::Couple(Bavarde x, Bavarde y) : a(x), b(y)
{}

// Classe Famille
class Famille
{
    Bavarde* T;
    int t;
    public:
        Famille(int taille=0);
        ~Famille();
};

Famille::Famille(int taille):t(taille)
{
    T = new Bavarde[taille];
    //T = new Bavarde[taille];
    //T = (Bavarde**)(malloc(sizeof(Bavarde)*taille));
}
Famille::~Famille()
{
    delete [] T;
}
/*
int main(int, char **)
{
  Bavarde b;
  Bavarde * p = new Bavarde(3);
  delete p;
  fonction(b);
  cout << Bavarde(0).get() << endl;

  return 0;
}
*/
/*
int main(int, char **)
{
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
  return 0;
}
*/
int main(int, char **)
{
  //Couple c(5,20);
  Famille f(6);
  return 0;
}
