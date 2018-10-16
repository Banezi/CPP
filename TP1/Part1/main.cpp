#include <iostream>
#include <string>

int main(int, char **)
{
  /*
  for(int i=0; i< 5; ++i)
    std::cout << "Bonjour les ZZ" << 2 << std::endl;
  */

  std::string prenom; // type spécial pour les chaînes de caractères
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin >> age ;
  std::cout << "Bonjour "<< prenom << std::endl;

  return 0;
}
