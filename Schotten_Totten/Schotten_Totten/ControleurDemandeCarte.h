#ifndef GUARD_CONTROLEURDEMANDECARTE
#define GUARD_CONTROLEURDEMANDECARTE
#include <vector>
#include "Carte.h"
using namespace std;
class ControleurDemandeCarte {

public:
	unsigned int choixCarte();

	vector<unsigned int> choixApplicationCarte(Carte carte);
};
#endif