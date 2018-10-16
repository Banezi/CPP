#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include <string>
#include "Forme.hpp"

class Rectangle  {
    protected:
         int x;
         int y;
         int w;
         int h;
    public:
        Rectangle(int x, int y, int w, int h);
        //Rectangle(int x1, int y1, int x2, int y2);
        sdt::string toString();
};

#endif
