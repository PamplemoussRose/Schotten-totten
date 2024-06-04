#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"


class Joueur {
private:
	int nbreCartes;
	int nbreCartesTactiquesJou�s;
	vector<unique_ptr<Carte>> mainJoueur;
public:
	int getNbreCartes() { return nbreCartes; };
	int getnbreCartesTactiquesJou�s() { return nbreCartesTactiquesJou�s; };
	vector<unique_ptr<Carte>> getMainJoueur() { return mainJoueur; };
};
#endif