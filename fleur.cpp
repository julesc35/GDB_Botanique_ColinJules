#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include <string>
#include "FLeur.h"


void Fleur::arroser(){
    _heures +=1;
    _soif -=20;
    _maturite +=10;
    _taille +=10;
    if(_soif<0) _sante-=30;
    if(_soif>50)  _sante+=15;
    if(_soif<50) _sante-=15;
    if(_soif>100) _soif=100;
    if (_sante<0) _mort=1;
    if (_sante>50) _maturite+=10;
    if(_sante<50) _maturite -=5;
    if(_sante>100) _sante=100;
    if(_maturite>100) _eclos=1;
    if(_eclos==1) _prix * 2, _fanne +=25;
    if(_fanne>100) _fanne=100, _prix/10;
    if(_mort == 1) std::cout << _nom << "est morte" << std::endl;
}

void Fleur::fertiliser(){
    if(_engrais=1) std::cout << _nom << "a deja ete fertilisee" << std::endl;
    if(_engrais=0) _engrais +=1;
    if(_sante<50) _maturite -=5;
    if(_sante>50) _maturite +=5;
    _maturite += 20;
    _heures +=1;
    _soif +=30;
    _taille +=30;
    if(_heures>24) _heures=0;
    if(_heures>24) _engrais=0;
    if (_maturite>100) _eclos=1;
    if(_eclos=1) _prix*2, _fanne+=25;
    if(_fanne>100) _fanne =100, _prix/10;

}

void Fleur::passeTemps(){
_heures=0;
_engrais=0;
_soif +=25;
if(_soif<0) _sante-=30;
if(_soif>50)  _sante+=15;
if(_soif<50) _sante-=15;
if(_soif>100) _soif=100;
if (_sante<0) _mort=1;
if (_sante>50) _maturite+=10;
if(_sante<50) _maturite -=5;
if(_sante>100) _sante=100;
if(_maturite>100) _eclos=1;
if(_eclos==1) _prix * 2, _fanne +=25;
if(_fanne>100) _fanne=100, _prix/10;
}

void Fleur::inspecter(){
    std::cout <<_nom << "est une plante, elle a consommer "
    << _engrais << " engrais, une hydratation de "
    << _soif << "/100, a une taille de "
    << _taille << "/100 et une santé de "
    << _sante << "/100" << std::endl;
}

#endif