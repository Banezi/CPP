#include <iostream>
#include "Rectangle.h"
#include "Cercle.h"
using namespace std;

int main()
{
    Rectangle r(1,2,3,4);
    r.toString();
    Cercle c(1,2,3,4,5,6);
    c.toString();
    return 0;
}
