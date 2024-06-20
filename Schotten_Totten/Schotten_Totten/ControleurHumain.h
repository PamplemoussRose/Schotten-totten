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
	/*!
	* revendique borne
	*/
	void revendiqueBorne(int joueurAct,EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes)override;
	/*!
	* pioche  une carte tactique ou une carte clan
	*/
	Carte* piocheT(ControleurPioche& controlPiocheClan, ControleurPioche& controlPiocheTact, Joueur& joueurActuel)override;
};
#endif