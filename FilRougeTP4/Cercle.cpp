#include <iostream>
#include "Cercle.h"

using namespace std;

Cercle::Cercle(int x, int y, int w, int h, int r, int c) : Rectangle(x,y,w,h), r(r), c(c)
{

}

void Cercle::toString()
{
    cout << "Cercle  " << "x = " << x << " y = " << y << " w = " << w << " h = " << h << " r = " << r << " c = " << c << endl;
}
