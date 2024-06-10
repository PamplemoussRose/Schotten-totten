#ifndef JOKER_H
#define JOKER_H

#include "CarteTroupeElite.h"

class Joker : public CarteTroupeElite
{
public:
	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte joker
	*/
	void effet(unsigned int val, unsigned int coul, unsigned int numBorne);
};
#endif // !JOKER_H
