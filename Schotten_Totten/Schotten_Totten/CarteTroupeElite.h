#ifndef CARTETROUPEELITE_H
#define CARTETROUPEELITE_H

#include "CarteTactique.h"
#include "CarteClan.h"

class CarteTroupeElite : public CarteTactique, public CarteClan
{
public:
	// Constructeur

	// delete du constructeur par defaut pour garantir la coherence des cartes
	CarteTroupeElite() = delete;

	/*!
	* \brief Constructeur d'une carte troupe elite
	*/
	CarteTroupeElite(string nomCarte, string coul, unsigned int val) : CarteTactique(nomCarte), CarteClan(coul, val) {};
};
#endif // !CARTETROUPEELITE_H