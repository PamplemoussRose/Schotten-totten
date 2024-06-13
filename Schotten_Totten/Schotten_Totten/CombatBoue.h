#ifndef COMBATBOUE_H
#define COMBATBOUE_H

#include "CarteModeCombat.h"

class CombatBoue : public CarteModeCombat
{
public:
	// Constructeur

	/*!
	* \brief constructeur a un parametre
	*/
	CombatBoue() : CarteModeCombat("Combat de Boue") {};

	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte combatboue
	* borne est la borne sur laquelle la carte prend effet
	*/
	void effet(unsigned int borne);
};
#endif // !COMBATBOUE_H
