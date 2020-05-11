#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>
#include "Plante.h"
#include "Fleur.h"

class Botaniste{

    protected:
    std::string _Nom;
    
    public:

    void dormir();
    void acheter();
    void revendre();

    void afficher();

}


#endif