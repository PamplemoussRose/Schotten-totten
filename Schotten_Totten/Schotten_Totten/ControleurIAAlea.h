#ifndef GUARD_CONTROLEURIAALEA
#define GUARD_CONTROLEURIAALEA
#include "ControleurPersonnage.h"
class ControleurIAAlea : public ControleurPersonnage {
public:
	ControleurIAAlea() :ControleurPersonnage() {};
	/*!
	* joue une carte
	*/
	void jouerCarte(Carte& carte, ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& ia)override;

};
#endif