#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>
#include <iostream>
#include <queue>
#include "ZZ.h"
#include "map"
#include <ctime>
#include <cstdlib>

using namespace std;
// Le tableau dynamique
/*
int main (int, char **) {
  std::vector<int> v;
  int input, i=0;

  while (std::cin >> input && i<10)
  {
    v.push_back (input);
    i++;
  }
  std::sort(v.begin(), v.end());

  std::copy (v.begin(), v.end(),
    std::ostream_iterator<int> (std::cout, "\n"));

  return 0;
}
*/

// La pile
/*
int main(int, char **) {
  std::stack<int> is;
  std::stack<double, std::vector<double> > ds;

  for (int i = 0; i < 100; ++i)
    is.push(i);

  while (!is.empty()) {
     std::cout << is.top() << std::endl;
     ds.push((double)is.top()*is.top());
     is.pop();
  }

  return 0;
}
*/

// File à priorité


int main (int, char **) {

    srand(time(NULL));
    ZZ Bane("Bane", "Mamadou", 10), Morgane("Morgane", "Bleverque", 11), X("X", "Y", 11), A("A", "B", 15);

    typedef std::vector<ZZ>  vzz;
    vzz zz;
    zz.push_back(Bane);
    zz.push_back(Morgane);
    zz.push_back(X);
    zz.push_back(A);
    copy(zz.begin(), zz.end(), ostream_iterator<ZZ> (cout, "\n"));

    /*priority_queue<ZZ> tri;

    for(vzz::iterator it = zz.begin();
        it!=zz.end(); ++it)
     tri.push(*it);

    while(!tri.empty()) {
       cout << tri.top() << " ";
       tri.pop();
    }*/

    /*
    ZZ* tab = new ZZ[4];
    tab[0] = Bane;
    tab[1] = Morgane;
    tab[2] = X;
    tab[3] = A;
    cout << tab[2];
    delete [] tab;
    */

    ComparateurNotes cmp;
    cout << cmp(A, Morgane);
    Rand_0_100 generation;
    vector<int> v(10,0);
    //generate(v.begin(), v.end(), generation);
    generate_n(v.begin(), 3, generation);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

  return 0;
}
