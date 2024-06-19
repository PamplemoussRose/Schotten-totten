#ifndef GUARD_CONTROLEURHUMAIN
#define GUARD_CONTROLEURHUMAIN
#include "ControleurPersonnage.h"
class ControleurHumain : public ControleurPersonnage {

public:
	/*!
	* joue une carte
	*/
	void jouerCarte(Carte& carte, ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur) override;
};
#endif