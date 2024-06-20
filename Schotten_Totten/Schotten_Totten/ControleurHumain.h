#ifndef GUARD_CONTROLEURHUMAIN
#define GUARD_CONTROLEURHUMAIN
#include <vector>
#include "ControleurPersonnage.h"
#include "Carte.h"
#include "Joueur.h"

class Carte;

using namespace std;

class ControleurHumain : public ControleurPersonnage {

public:
	/*!
	* joue une carte
	*/
	void jouerCarte(ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur) override;
	void revendiqueBorne(EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes)override;
};
#endif