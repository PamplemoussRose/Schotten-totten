#ifndef ESPION_H
#define ESPION_H

#include "CarteTroupeElite.h"

class Espion : public CarteTroupeElite
{
public:
	// Constructeur

	/*!
	* \brief Constructeur d'une carte espion
	*/
	Espion() : CarteTroupeElite("Espion", Couleurs::NONE, 7) {};

	// Methodes

	/*!
	* \brief Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* \brief Methode d'effet de la carte espion
	*/
	void effet(unsigned int coul, unsigned int numBorne, unsigned int joueur);
};
#endif // !ESPION_H
