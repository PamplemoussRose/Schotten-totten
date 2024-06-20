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
	virtual void jouerCarte(ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur) = 0;
	/*!
	* \ revendique la borne avec ce numero
	*/
	virtual void revendiqueBorne(int joueurAct, EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes) =0;
	Carte* pioche(Pioche& pioche, ControleurPioche& controlPioche, Joueur& joueurActuel);
};
#endif