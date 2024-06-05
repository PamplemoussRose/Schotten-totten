#pragma once
#ifndef PIOCHE_HEADER
#define PIOCHE_HEADER
#include "Carte.h"
class Pioche {
private:
	//Attributs
	int nbCartesRestantes;
	int nbTotal;
public:
	//Methodes
	/*!
	* \brief retourne nombre cartes restantes dans pioche
	*/
	int getNbCartesRestantes() { return nbCartesRestantes; };
	/*!
	* \brief retourne nombre total des le depart
	*/
	int getNbTotal() { return nbTotal; };
};
#endif