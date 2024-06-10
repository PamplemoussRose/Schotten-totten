#ifndef STRATEGE_H
#define STRATEGE_H

#include "CarteRuse.h"

class Stratege : public CarteRuse
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
	void effet();
};
#endif // !STRATEGE_H
