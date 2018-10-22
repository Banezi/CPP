// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C
class Point {
   // par défaut, tout est privé dans une "class"

   int x;
   int y;
   static int compteur; // atribut de classe

 public:
  int getX();
  int getY();
  void setX(int);
  void setY(int);
  void deplacerDe(int);
  void deplacerVers(int, int);
  static int getCompteur();

  Point();
  Point(int, int);

};
