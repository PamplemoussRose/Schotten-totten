#ifndef CARTEMODECOMBAT_H
#define CARTEMODECOMBAT_H

#include "CarteTactique.h"

class CarteModeCombat : public CarteTactique
{
public:
	// Constructeur

	// delete du constructeur par defaut pour garantir la coherence des cartes
	CarteModeCombat() = delete;
	/*!
	* \brief constructeur a un parametre
	*/
	CarteModeCombat(string nomCarte) : CarteTactique(nomCarte) {};
};
#endif // !CARTEMODECOMBAT_H
