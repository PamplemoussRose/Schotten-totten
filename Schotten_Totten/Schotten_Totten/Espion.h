#ifndef ESPION_H
#define ESPION_H

#include "CarteTroupeElite.h"

class Espion : public CarteTroupeElite
{
public:
	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte espion
	*/
	void effet(unsigned int coul, unsigned int numBorne);
};
#endif // !ESPION_H
