#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>
#include "Plante.h"

void Plante::arroser(){
    _soif -= 20;
    if(_soif<0) _sante =30;
    if(_soif>50) _sante+=20;
    if(_soif<50) _sante-=20;
    if(_sante<0) _mort=1;
    if(_sante<50) _maturite -=5;
    if(_sante<50) _taille -=15;
    if(_sante>50) _maturite +=5;
    if(_sante>50) _taille +=10;
    _maturite += 15;
    _taille +=30;
    if(_taille>100) _taille=100;
    _heures +=1;
    if(_mort = 1) std::cout << _nom << "est morte" << std::endl;
}

void Plante::tailler(){
    _taille -=25;
    if(_taille<50) _sante -=25;
    if(_taille>100) _taille=100;
    if(_sante =0) _mort=1;
    if(_sante<50) _maturite -=5;
    if(_sante>50) _maturite +=5;
    _maturite += 15;
    _heures +=1;
    if(_mort == 1) std::cout << _nom << "est morte" << std::endl;
}

void Plante::fertiliser(){
    if(_engrais=1) std::cout << _nom << "a deja ete fertilisee" << std::endl;
    if(_engrais=0) _engrais +=1;
    _taille += 40;
    if(_taille>100) _taille=100;
    if(_sante<50) _maturite -=5;
    if(_sante<50) _taille -=15;
    if(_sante>50) _maturite +=5;
    if(_sante>50) _taille +=10;
    _maturite += 30;
    _heures +=1;
    if(_heures>24) _heures=0;
    if(_heures>24) _engrais=0;
}

void Plante::passeTemps(){  
    _engrais=0;
    _heures =0;
    _taille +=30;
    _maturite +=30;
    _soif+= 25;
    if (_soif<0) _mort =1;
    if (_soif>50) _sante+=20;
    if (_soif<50) _sante-=20;
    if (_sante<0) _mort=1;
    if (_sante<50) _maturite -=5, _taille-=15;
    if (_sante>50) _maturite +=5, _taille+=10;
    if(_mort = 1) std::cout << _nom << "est morte" << std::endl;
}

void Plante::inspecter(){
    std::cout <<_nom << "est une plante, elle a consommer "
    << _engrais << " engrais, une hydratation de "
    << _soif << "/100, a une taille de "
    << _taille << "/100 et une santé de "
    << _sante << "/100" << std::endl;
}

Plante::Plante(std::string nom) : _nom(nom), _engrais(0), _soif(50), _taille(30), _sante(100) {}

#endif