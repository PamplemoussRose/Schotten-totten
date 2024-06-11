#ifndef TRAITRE_H
#define TRAITRE_H

#include "CarteRuse.h"

class Traitre : public CarteRuse
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
	void effet(unsigned int borneAdverse, unsigned int carte, unsigned int borneAliee);
};
#endif // !TRAITRE_H
