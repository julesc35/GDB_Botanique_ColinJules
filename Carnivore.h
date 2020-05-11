#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>

class Carnivore{
    
    private:

    int _maturite;
    int _soif;
    int _sante;
    int _taille;
    bool _mort;
    bool _engrais;
    int _heures;
    std::string _nom;
    int _prix;
    bool _mouche;
    int _jours;

    public:

    void arroser();
    void tailler();
    void fertiliser();
    void mature();
    void passeTemps();
    void nourrir();

    void inspecter();
};

#endif