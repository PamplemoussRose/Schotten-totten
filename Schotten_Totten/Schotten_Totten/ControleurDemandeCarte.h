#ifndef GUARD_CONTROLEURDEMANDECARTE
#define GUARD_CONTROLEURDEMANDECARTE
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Joueur.h"
using namespace std;
class ControleurDemandeCarte {

public:
	/*
	demande au joueur la carte qu'il souhaite jouer et la retourne si c'est correcte
	*/
	unsigned int choixCarte(Joueur joueur, Joueur autreJoueur) {
		unsigned int numeroCarteChoisie;
		bool carteChoisie  = false;
		while (!carteChoisie){
			cin >> numeroCarteChoisie;

			//la condition sur les cartes tactiques est incorrecte -> il y a un moyen avec c++ pour connaître le type
			if (numeroCarteChoisie != 0 && joueur.getNbreCartes() >= numeroCarteChoisie && joueur.getnbreCartesTactiquesJoués() <= autreJoueur.getnbreCartesTactiquesJoués()) {// !=0 signifie que l'utilisateur n'a pas entre un nombre
				carteChoisie = true;
				return numeroCarteChoisie;
			}
		}
	}

	/*
	demande au joueur les choix que peut faire sa carte
	*/
	vector<unsigned int> choixApplicationCarte(Carte carte);
};
#endif