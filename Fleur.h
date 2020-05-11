
#ifndef FLEUR_H
#define FLEUR_H

#include <string>

class Fleur{

    private:
    int _maturite;
    int _soif;
    int _sante;
    int _taille;
    bool _mort;
    bool _engrais;
    int _heures;
    int _prix;
    bool _eclos;
    int _fanne;
    std::string _nom;

    public:

    void arroser();
    void fertiliser();
    void passeTemps();
    

    void inspecter();

};


#endif