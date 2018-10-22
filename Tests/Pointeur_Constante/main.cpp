#include <iostream>

using namespace std;

int main()
{
    int x=5, y=10;

    /*
        int const a = 2; // const int a = 2; ceci est un cas exceptionnel d'utilisation de const
    */

    //const int * t1 = &x; // ne fait rien
    //int const * t1 = &x; // ne fait rien
    /*
        int * const t1 = &x; // t1 est un pointeur constant sur l'entier x;
        on peut modifier la valeur de x directement soit avec le pointeur t1.
        on ne peut pas affecter une autre adresse à t1.
    */
    /*
        const int * const t1 = &x; //pointeur constant t1 sur x. On peut changer la valeur de x mais pas celle de t1.
        equivaut à int * const t1 = &x
    */

    /*
        int const * const t1 = &x; // pointeur constant t1 sur x. On peut changer la valeur de x mais pas celle de t1.
        equivaut à int * const t1 = &x
    */
    //x = 6;
    //t1 = &y;
    //*t1 = 6;
    //cout << x;
    return 0;
}
