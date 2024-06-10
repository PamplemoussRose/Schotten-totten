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
	*/
	void effet(unsigned int carte);
};
#endif // !CAHSSEURTETE_H
