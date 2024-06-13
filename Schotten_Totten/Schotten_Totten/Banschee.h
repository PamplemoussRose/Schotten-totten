#ifndef BANSCHEE_H
#define BANSCHEE_H

#include "CarteRuse.h"

class Banschee : public CarteRuse
{
public:
	// Constructeur

	/*!
	* \brief constructeur a un parametre
	*/
	Banschee() : CarteRuse("Banschee") {};

	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte banschee
	*/
	void effet(unsigned int borne, unsigned int carte);
};
#endif // !BANSCHEE_H
