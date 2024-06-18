#ifndef GUARD_CONTROLEURIAALEA
#define GUARD_CONTROLEURIAALEA
#include <iostream>
#include "ControleurPersonnage.h"
#include "Joueur.h"
#include "Carte.h"
using namespace std;
class ControleurIAAlea : public ControleurPersonnage {
public:
	void jouerCarte(Joueur joueur, Carte carte){
		//gerer exception si les deux bornes selectionnes sont les memes
		//voir aussi le fait que les ia ne peuvent pas jouer trop de cartes tactiques

		unsigned int nCarte = (rand() % joueur.getNbreCartes()) + 1; //prend un nombre aléatoire entre 1 et nbreCartes
		Carte* carteRecuperee = joueur.getCarteMainPosition(nCarte);

		vector<vector<unsigned int>> lstChoix = carteRecuperee->choixEffet(); // Pas d'affichage : retourne les choix
		/*for (auto iter = lstChoix.begin(); iter != lstChoix.end(); iter++) {
			iter.effet;
		}*/

        vector<int> v1;
        for (int j = 0; j < 9; j++) {
            v1.push_back(rand() % lstChoix.size() + 1);//choisi
        }
        //lstChoix.push_back(v1);
		carteRecuperee->effet(lstChoix);
	}
};
#endif