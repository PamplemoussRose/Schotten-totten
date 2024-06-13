#ifndef PORTEBOUCLIER_H
#define PORTEBOUCLIER_H

#include "CarteTroupeElite.h"

class PorteBouclier : public CarteTroupeElite
{
public:
	// Constructeur

	/*!
	* \brief Constructeur d'une carte troupe elite
	*/
	PorteBouclier() : CarteTroupeElite("Porte Bouclier", Couleurs::NONE, 0) {};

	// Methodes

	/*!
	* \brief Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* \brief Methode d'effet de la carte porte bouclier
	*/
	void effet(unsigned int val, unsigned int coul, unsigned int numBorne);
};
#endif // !PORTEBOUCLIER_H
