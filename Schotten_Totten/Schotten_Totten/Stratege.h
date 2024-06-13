#ifndef STRATEGE_H
#define STRATEGE_H

#include "CarteRuse.h"

class Stratege : public CarteRuse
{
private:
	// Constructeur

	/*!
	* \brief constructeur a un parametre
	*/
	Stratege() : CarteRuse("Stratege") {};

	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte stratege
	* Deplacement de la carte d'une borne a une autre
	*/
	void effet(unsigned int borneDep, unsigned int carte, unsigned int borneArr);
	/*!
	* Methode d'effet de la carte stratege
	* Deplacement de la carte d'une borne a la defausse
	*/
	void effet(unsigned int borne, unsigned int carte);
};
#endif // !STRATEGE_H
