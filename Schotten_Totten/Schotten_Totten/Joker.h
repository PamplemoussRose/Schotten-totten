#ifndef JOKER_H
#define JOKER_H

#include "CarteTroupeElite.h"

class Joker : public CarteTroupeElite
{
public:
	// Constructeur

	/*!
	* \brief Constructeur d'une carte troupe elite
	*/
	Joker() : CarteTroupeElite("Joker", "COULEUR", 0) {};

	// Methodes

	/*!
	* \brief Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* \brief Methode d'effet de la carte joker
	*/
	void effet(unsigned int val, unsigned int coul, unsigned int numBorne);
};
#endif // !JOKER_H