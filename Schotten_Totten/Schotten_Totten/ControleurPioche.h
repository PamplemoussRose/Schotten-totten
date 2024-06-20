#ifndef GUARD_CONTROLEURPIOCHE
#define GUARD_CONTROLEURPIOCHE
#include "Pioche.h"
#include "Joueur.h"
class ControleurPioche {
private:
	Pioche* pioche;

public:
	ControleurPioche() = delete;
	ControleurPioche(Pioche* pPioche) { pioche = pPioche; };
	Pioche* getPioche() {return pioche;};
	/*!
	* \brief fait piocher unne carte dans la pioche au joueur
	*/
	Carte* piocher(Joueur& joueur);
	/*!
	* \brief renvoie true si pioche vide
	*/
	bool estVide();
	/*!
	* \brief melange les cartes dans la pioche
	*/
	void melanger();
};
#endif