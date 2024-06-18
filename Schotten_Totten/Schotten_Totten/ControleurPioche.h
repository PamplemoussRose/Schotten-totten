#include "PiocheClan.h"
#include "Joueur.h"
class ControleurPioche {
public:
	/*!
	* \brief fait piocher unne carte dans la pioche au joueur
	*/
	void piocher(Pioche& pioche,Joueur& joueur);
	/*!
	* \brief renvoie true si pioche vide
	*/
	bool estVide(Pioche& pioche);
};