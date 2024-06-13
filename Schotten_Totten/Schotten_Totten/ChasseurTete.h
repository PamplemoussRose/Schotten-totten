#ifndef CAHSSEURTETE_H
#define CHASSEURTETE_H

#include "CarteRuse.h"

class ChasseurTete : public CarteRuse
{
private:
	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte espion
	* carte1 et carte2 sont les cartes a remettre dans la pioche
	*/
	void effet(unsigned int carte1, unsigned int carte2);
};
#endif // !CAHSSEURTETE_H
