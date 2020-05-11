#include <iostream>
#include <vector>
#include <string>

#include "Plante.h"
#include "Fleur.h"
#include "botaniste.h"
#include "Carnivore.h"

using namespace std;

int main(){

int choix =0;
int choixPlante = 0;
int choixFleur = 0;
int choixPlanteCarn = 0;

Botaniste * player = new Botaniste("vous");

cout << "que voulez-vous faire ?\n";
cout << "1- prendre une plante\n";
cout << "2- prendre une fleur\n";
cout << "3- prendre une plante carnivore\n";
cout << "4- continuer ma journer\n";
cin >> choix;

if(choix == 1){
Plante * herbe_a_chat = new Plante("herbe a chat");
herbe_a_chat->inspecter();
cout << "que voulez-vous faire ?\n";
cout << "1- l'arroser\n";
cout << "2- la tailler\n";
cout << "3- fertiliser\n";
cout << "4- la vendre\n";
cout << "5-dormir\n";
cin >> choixPlante;

    if(choixPlante == 1){
        herbe_a_chat->arroser();
        herbe_a_chat->inspecter();
    }
    if(choixPlante == 2){
        herbe_a_chat->tailler();
        herbe_a_chat->inspecter();
    }    
    if(choixPlante == 3){
        herbe_a_chat->fertiliser();
        herbe_a_chat->inspecter();
    }
     /*if(choixPlante == 4){
        herbe_a_chat->arroser();
        herbe_a_chat->inspecter();
    } */
    if(choixPlante == 5){
        herbe_a_chat->passeTemps();
        herbe_a_chat->inspecter();
    }
};

if(choix == 2){
Fleur * orchidee = new Fleur("Orchidee");
orchidee->inspecter();
cout << "que voulez-vous faire ?\n";
cout << "1- la nourrir\n";
cout << "2- la tailler\n";
cout << "3- fertiliser\n";
cout << "4-dormir\n";
cin >> choixFleur;
};

if(choix == 3){
Carnivore * tue_mouche = new Carnivore("herbe a chat");
tue_mouche->inspecter();
cout << "que voulez-vous faire ?\n";
cout << "1- la nourrir\n";
cout << "2- la tailler\n";
cout << "3- fertiliser\n";
cout << "4-dormir\n";
cin >> choixPlanteCarn;
};

if(choix == 4){

};

return 0;
}