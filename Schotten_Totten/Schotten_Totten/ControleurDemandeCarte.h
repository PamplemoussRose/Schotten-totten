#ifndef CONTROLEURDEMANDECARTE_HEADER
#define CONTROLEURDEMANDECARTE_HEADER

#include <iostream>
#include <vector>
#include "Carte.h"
#include "CarteTactique.h"
#include "Joueur.h"
#include "VueDemandeCarte.h"
using namespace std;

class ControleurDemandeCarte {
private :
    VueDemandeCarte* vue;

public:
    ControleurDemandeCarte() {
        vue = new VueDemandeCarte();
    }
    /*
    demande au joueur la carte qu'il souhaite jouer et la retourne si c'est correcte
    */
    unsigned int choixCarte(Joueur joueur, Joueur autreJoueur);
    /*
    demande au joueur les choix que peut faire sa carte
    */
    vector<unsigned int> choixApplicationCarte(Carte carte);
};

#endif
