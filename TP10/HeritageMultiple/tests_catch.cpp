// Le #define suivant permet de creer automatiquement une fonction main()
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include <fstream>
#include <iostream>
#include <string>

#include "Humain.hpp"
#include "Machine.hpp"

using namespace std;

// NOTE : ce test utilise des enum "class"
// il faut donc utiliser un compilateur g++ >= 6.1
// ou activer l'option c++11 du compilateur
// -std=c++11 ou -std=c++0x sur les tres vieux compilateurs

// Les tests ne sont pas exhaustifs, loin de là

TEST_CASE("Humain1") {
  const char * nom ="Alex"; // char* par string
  const Humain alex(nom, HOMME, 35);

  CHECK( nom   == alex.getNom()   );
  CHECK( HOMME == alex.getGenre() );
  // ou enum class Genre.HOMME
  CHECK( 35    == alex.getAge()   );
}
/*
TEST_CASE("Humain2") {
  Humain thomas("thomas", HOMME, 26);

  thomas.setNom("conchita");
  thomas.setAge(27);
  thomas.setGenre(FEMME);

  CHECK( "conchita" == thomas.getNom()   );
  CHECK( FEMME      == thomas.getGenre() );
  CHECK( 27         == thomas.getAge()   );
}

TEST_CASE("Machine") {
  Machine stylet("stylet Apple", 2*24*3600, 1);

  CHECK( "stylet Apple" == stylet.getType()      );
  CHECK( 2*24*3600      == stylet.getAutonomie() );
  CHECK( 1              == stylet.getIfixit()    );
}

TEST_CASE("Robocop") {
  Humanoide robocop("Murphy", "Robocop 1.0", HOMME, 35);

  CHECK( "Murphy"      == robocop.getNom()    );
  CHECK( "Robocop 1.0" == robocop.getType()   );
  CHECK( HOMME         == robocop.getGenre()  );
  CHECK( 35            == robocop.getAge()    );
  CHECK( 3             == robocop.getIfixit() );
}
*/