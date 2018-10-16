#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
#include <string.h>

class Rectangle
{
    public:
    int x;
    int y;
    int w;
    int h;
    public:
    Rectangle(int x, int y, int w, int h);
//    Rectangle(int x1, int y1, int x2, int y2);
    void toString();
};

#endif // RECTANGLE_H_INCLUDED
