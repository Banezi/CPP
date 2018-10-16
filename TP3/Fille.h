#include "Mere.h"
#include <string>
class Fille : public Mere
{
    public:
    Fille();
    Fille (std::string name);
    ~Fille();
    void visibilite();
    void afficher();
};
