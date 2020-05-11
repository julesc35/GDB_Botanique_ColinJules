#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{

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

    public:

    void arroser();
    void tailler();
    void fertiliser();
    void mature();
    void passeTemps();

    void inspecter();

};

#endif