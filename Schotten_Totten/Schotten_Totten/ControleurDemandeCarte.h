#ifndef GUARD_CONTROLEURDEMANDECARTE
#define GUARD_CONTROLEURDEMANDECARTE
#include <vector>
#include "Carte.h"
using namespace std;
class ControleurDemandeCarte {

public:
	/*
	demande au joueur la carte qu'il souhaite jouer
	*/
	unsigned int choixCarte();

	/*
	demande au joueur les choix que peut faire sa carte
	*/
	vector<unsigned int> choixApplicationCarte(Carte carte);
};
#endif