#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include <iostream>
#include "Botaniste.h"
#include "Plante.h"
#include "Fleur.h"

void Botaniste::dormir(Plante * cible){
    cible->passeTemps();
}

void Botaniste::acheter(){

}

void Botaniste::revendre(){

}

void Botaniste::afficher(){

}

#endif