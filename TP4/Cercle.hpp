#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include <string>
#include "Forme.hpp"

class Cercle  {
protected:
         int x;
         int y;
         int w;
         int h;

    public:
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);
        sdt::string toString();
};

#endif
