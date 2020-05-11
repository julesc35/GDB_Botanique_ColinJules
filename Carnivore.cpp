#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <iostream>
#include "Carnivore.h"

void Carnivore::arroser(){
    _soif -= 20;
    if(_soif<0) _sante =30;
    if(_soif>50) _sante+=20;
    if(_soif<50) _sante-=20;
    if(_sante<0) _mort=1;
    if(_sante<50) _maturite -=5;
    if(_sante<50) _taille -=15;
    if(_sante>50) _maturite +=5;
    if(_sante>50) _taille +=10;
    if(_mouche>1) _taille +=5, _maturite +=10;
    _maturite += 10;
    _taille +=15;
    if(_taille>100) _taille=100;
    _heures +=1;
    if(_heures>24) _heures = 0, _jours +1;
    if(_jours>7) _jours=0;
    if(_mort == 1) std::cout << _nom << "est morte" << std::endl;
}
void Carnivore::tailler(){
    _taille -=25;
    if(_taille<50) _sante -=25;
    if(_taille>100) _taille=100;
    if(_sante =0) _mort=1;
    if(_sante<50) _maturite -=5;
    if(_sante>50) _maturite +=5;
    if(_mouche>1) _taille +=5, _maturite +=10;
    _maturite += 15;
    _heures +=1;
    if(_heures>24) _heures = 0, _jours +1, _engrais =0;
    if(_jours>7) _jours=0;
    if(_mort == 1) std::cout << _nom << "est morte" << std::endl;
}

void Carnivore::fertiliser(){
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
    if(_jours>7) _jours=0;
}

void Carnivore::passeTemps(){  
    _engrais=0;
    _heures =0;
    _jours +=1;
    if(_jours>7) _jours=0;
    _taille +=30;
    _maturite +=30;
    _soif+= 25;
    if (_soif<0) _mort =1;
    if (_soif>50) _sante+=20;
    if (_soif<50) _sante-=20;
    if (_sante<0) _mort=1;
    if (_sante<50) _maturite -=5, _taille-=15;
    if (_sante>50) _maturite +=5, _taille+=10;
    if(_mort == 1) std::cout << _nom << "est morte" << std::endl;
}

void Carnivore::nourrir(){
    _mouche +=1;
    _heures +=1;
    _soif +=15;
    _sante +=15;
    if(_sante<50) _maturite-=5, _taille -=15;
    if(_sante>50) _maturite +=5, _taille+=10;
    if(_heures>24) _heures=0;
    if(_heures>24) _engrais=0;
}
Carnivore::Carnivore(std::string nom) : _nom(nom), _engrais(0), _soif(50), _taille(30), _sante(100), _mouche(0) {}

#endif