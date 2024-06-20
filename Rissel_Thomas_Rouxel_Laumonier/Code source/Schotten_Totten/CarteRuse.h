#ifndef CARTERUSE_H
#define CARTERUSE_H

#include "CarteTactique.h"

class CarteRuse : public CarteTactique
{
public:
	// Constructeur

	// delete du constructeur par defaut pour garantir la coherence des cartes
	CarteRuse() = delete;
	/*!
	* \brief constructeur a un parametre
	*/
	CarteRuse(string nomCarte) : CarteTactique(nomCarte) {};
};
#endif // !CARTERUSE_H
