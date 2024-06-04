#ifndef PIOCHECLAN_HEADER
#define PIOCHECLAN_HEADER
#include "CarteClan.h"
#include "Pioche.h"
class PiocheClan : public Pioche {
private:
	vector<CarteClan> cartesClan;
public:
	vector<CarteClan> getCartesClan() { return cartesClan; }
	void retirerCarteClan();
	void ajoutFinPioche(CarteClan carte);
};
#endif