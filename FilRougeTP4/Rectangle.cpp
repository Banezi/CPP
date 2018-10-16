#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int x, int y, int w, int h): x(x), y(y), w(w), h(h)
{

}

void Rectangle::toString()
{
    cout << "Rectangle  " << "x = " << x << " y = " << y << " w = " << w << " h = " << h << endl;
}
