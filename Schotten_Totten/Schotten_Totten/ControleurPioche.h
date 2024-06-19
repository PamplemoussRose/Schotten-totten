#ifndef GUARD_CONTROLEURPIOCHE
#define GUARD_CONTROLEURPIOCHE
#include "PiocheClan.h"
#include "Joueur.h"
class ControleurPioche {
public:
	/*!
	* \brief fait piocher unne carte dans la pioche au joueur
	*/
	Carte* piocher(Pioche& pioche,Joueur& joueur);
	/*!
	* \brief renvoie true si pioche vide
	*/
	bool estVide(Pioche& pioche);
	/*!
	* \brief melange les cartes dans la pioche
	*/
	void melanger(Pioche& pioche);
};
#endif