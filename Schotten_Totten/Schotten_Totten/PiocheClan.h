#ifndef PIOCHECLAN_HEADER
#define PIOCHECLAN_HEADER
#include "CarteClan.h"
#include "Pioche.h"
class PiocheClan : public Pioche {
private:
	//Attributs
	vector<CarteClan*> cartesClan;
public:
	//Methodes
	/*!
	* \brief retourne pioche cartes clan
	*/
	vector<CarteClan*>& getCartesClan() { return cartesClan; };
};
#endif