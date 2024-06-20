#include "ControleurVictoire.h"
#include "Plateau.h"

unsigned int ControleurVictoire::estGagnant() {
	unsigned int borneJ1 = 0, borneJ2 = 0, suiteJ1 = 0, suiteJ2 = 0;

	for (auto borne = Plateau::getInstance()->getBornes().begin(); borne != Plateau::getInstance()->getBornes().end(); borne++) {
		if ((*borne)->getSatut() == 1) {
			borneJ1++;
			suiteJ1++;
			suiteJ2 = 0;
		}
		else if ((*borne)->getSatut() == -1) {
			borneJ2++;
			suiteJ2++;
			suiteJ1 = 0;
		}
		else {
			suiteJ1 = 0;
			suiteJ2 = 0;
		}

		if (suiteJ1 == 3) {
			return 1;
		}
		else if (suiteJ2 == 3) {
			return 2;
		}
		else if (borneJ1 == 5) {
			return 1;
		}
		else if (borneJ2 == 5) {
			return 2;
		}
	}
	return 0;
}