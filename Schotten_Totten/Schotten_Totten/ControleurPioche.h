#include "PiocheClan.h"
#include "Joueur.h"
class ControleurPioche {
public:
	void piocher(Pioche& pioche,Joueur& joueur);
	bool estVide(Pioche& pioche);
};