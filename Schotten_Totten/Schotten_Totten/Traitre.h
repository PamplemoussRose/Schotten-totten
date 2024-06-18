#ifndef TRAITRE_H
#define TRAITRE_H

#include "CarteRuse.h"

class Traitre : public CarteRuse
{
private:
	// Constructeur

	/*!
	* \brief constructeur a un parametre
	*/
	Traitre() : CarteRuse("Traitre") {};

	// Methodes

	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'effet de la carte espion
	*/
	void effet(unsigned int borneAdverse, unsigned int carte, unsigned int borneAliee, unsigned int joueur);
};
#endif // !TRAITRE_H
