#ifndef GUARD_CONTROLEURHUMAIN
#define GUARD_CONTROLEURHUMAIN
#include "ControleurPersonnage.h"
#include "Carte.h"
#include "CarteClan.h"
#include "CarteTactique.h"
#include "ControleurDemandeCarte.h"
using namespace std;
class ControleurHumain : public ControleurPersonnage {

public:
	void jouerCarte(Carte carte, ControleurDemandeCarte controleurDemandeCarte) {
		unsigned int nCarte = controleurDemandeCarte.choixCarte();
		vector<unsigned int> lstChoix = controleurDemandeCarte.choixApplicationCarte(carte);
		carte.effet(lstChoix);
	}
};
#endif