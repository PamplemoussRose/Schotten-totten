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
    VueDemandeCarte vue;

public:
    /*
    demande au joueur la carte qu'il souhaite jouer et la retourne si c'est correcte
    */
    unsigned int choixCarte(Joueur joueur, Joueur autreJoueur) {
        unsigned int numeroCarteChoisie;
        bool choixFait = false;
        while (!choixFait) {
            numeroCarteChoisie = vue.demandeCarte();
            //cin >> numeroCarteChoisie;
            if (numeroCarteChoisie != 0 && joueur.getNbreCartes() >= numeroCarteChoisie) { // != 0 signifie que l'utilisateur n'a pas entré un nombre
                Carte* carteChoisie = joueur.getCarteMainPosition(numeroCarteChoisie - 1); //-1 carte la carte 1 est à la position 0

                CarteTactique* carteTactique = dynamic_cast<CarteTactique*>(carteChoisie);
                if (carteTactique) {// si c'est une carte Tactique
                    cout << "La carte sélectionnée est une instance de la classe CarteTactique" << endl;

                    if (joueur.getnbreCartesTactiquesJoués() <= autreJoueur.getnbreCartesTactiquesJoués()) { // S'il peut jouer sa carte tactique
                        choixFait = true;
                        return numeroCarteChoisie;
                    }
                }
                else { // Si ce n'est pas une carte tactique
                    cout << "La carte sélectionnée n'est pas une instance de la classe CarteTactique" << endl;
                    choixFait = true;
                    return numeroCarteChoisie;
                }
            } 
        }
    }
    /*
    demande au joueur les choix que peut faire sa carte
    */
    vector<unsigned int> choixApplicationCarte(Carte carte);
};

#endif
