#ifndef GUARD_CONTROLEURIAALEA
#define GUARD_CONTROLEURIAALEA
#include "ControleurPersonnage.h"
#include <random>
#include <vector>
#include "Carte.h"
#include "Joueur.h"
using namespace std;

class ControleurIAAlea : public ControleurPersonnage {
public:
	ControleurIAAlea() :ControleurPersonnage() {};
	/*!
	* joue une carte
	*/
	void jouerCarte( ControleurDemandeCarte& controleurDemandeCarte, Joueur& ia, Joueur& autreJoueur)override;
	/*!
	* \ revendique la borne avec ce numero
	*/
	void revendiqueBorne(Borne& borneJouee,int joueurAct,EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes);
	/*!
	* \ le joueur pioche en version tactique
	*/
	Carte* piocheT(ControleurPioche& controlPiocheClan,ControleurPioche& controlPiocheTact, Joueur& joueurActuel);
};
#endif