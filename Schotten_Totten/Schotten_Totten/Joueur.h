#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"


class Joueur {
private:
	int nbreCartes;
	int nbreCartesTactiquesJoués;
	vector<unique_ptr<Carte>> mainJoueur;
public:
	int getNbreCartes() { return nbreCartes; };
	int getnbreCartesTactiquesJoués() { return nbreCartesTactiquesJoués; };
	vector<unique_ptr<Carte>> getMainJoueur() { return mainJoueur; };
};
#endif