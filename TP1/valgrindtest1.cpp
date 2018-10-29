#include <iostream>
using namespace std;
/*
int main(int, char**) {
   int * p = new int;

   *p = 3;
   cout << *p << endl;

   return 0;
}
*/
int main(int, char**) {
   const int taille = 500;

   int * p = new int[taille];

   for(auto i = 0; i< taille; ++i ) p[i] = i;
   for(auto i = 0; i< taille; ++i ) cout << p[i] << endl;

   return 0;
}