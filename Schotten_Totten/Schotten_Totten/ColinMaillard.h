#ifndef COLINMAILLARD_H
#define COLINMAILLARD_H

#include "CarteModeCombat.h"

class ColinMaillard : public CarteModeCombat
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
#endif // !COLINMAILLARD_H
