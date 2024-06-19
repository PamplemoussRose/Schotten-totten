#ifndef GUARD_CONTROLEURPERSONNAGE
#define GUARD_CONTROLEURPERSONNAGE

#include <iostream>
#include "Joueur.h"
#include "ControleurDemandeCarte.h"
#include "CarteClan.h"
#include "CarteTactique.h"
using namespace std;

class ControleurPersonnage {
public :
	/*!
	* méthode virtuelle de joue une carte
	*/
	virtual void jouerCarte(Carte& carte, ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur) = 0;
};
#endif