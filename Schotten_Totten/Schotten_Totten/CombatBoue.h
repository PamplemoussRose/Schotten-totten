#ifndef COMBATBOUE_H
#define COMBATBOUE_H

#include "CarteModeCombat.h"

class CombatBoue : public CarteModeCombat
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
#endif // !COMBATBOUE_H
