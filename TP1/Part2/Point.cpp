// Fichier Point.cpp

#include <iostream>
#include "Point.hpp"

int Point::getX() {
  return x;
}

int main(int, char**) {
  Point p;

  std::cout << p.getX();

  return 0;
}
