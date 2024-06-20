#ifndef GUARD_CONTROLEURPERSONNAGE
#define GUARD_CONTROLEURPERSONNAGE

#include <iostream>
#include "Joueur.h"
#include "ControleurDemandeCarte.h"
#include "Carte.h"
#include "Plateau.h"
#include "ControleurBorne.h"
#include "EtatJeu.h"
#include "ControleurPioche.h"

using namespace std;

class ControleurPersonnage {
public :
	/*!
	* méthode virtuelle de joue une carte
	*/
	virtual vector<unsigned int> jouerCarte(ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur) = 0;
	/*!
	* \ revendique la borne avec ce numero
	*/
	virtual void revendiqueBorne(int joueurAct, EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes) =0;
	/*!
	* \ pioche en version normal
	*/
	Carte* piocheV1( ControleurPioche& controlPioche, Joueur& joueurActuel);
	/*!
	* \ pioche en version tactique
	*/
	virtual Carte* piocheT(ControleurPioche& controlPiocheClan, ControleurPioche& controlPiocheTact, Joueur& joueurActuel)=0;
};
#endif