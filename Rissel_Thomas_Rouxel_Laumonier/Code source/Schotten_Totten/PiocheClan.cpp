#include"PiocheClan.h"

PiocheClan::PiocheClan() : Pioche() {
	for (unsigned int i = 1; i != 10; i++) {
		getPioche().push_back(new CarteClan(Couleurs::bleu, i));
		getPioche().push_back(new CarteClan(Couleurs::jaune, i));
		getPioche().push_back(new CarteClan(Couleurs::marron, i));
		getPioche().push_back(new CarteClan(Couleurs::rouge, i));
		getPioche().push_back(new CarteClan(Couleurs::vert, i));
		getPioche().push_back(new CarteClan(Couleurs::violet, i));
	}
	melange();
	setNbTotal(54);
	setNbCartesRestantes(54);
}
