#ifndef VUEJEUV1_HEADER
#define VUEJEUV1_HEADER
#include "VueJeu.h"
#include "ControleurPioche.h"
class ControleurJeuV1;

class VueJeuV1 : public VueJeu {
private:
	ControleurJeuV1* controleurV1;
	ControleurPioche* controleurPioche;

public:
	void setControleur(ControleurJeuV1* pControleur) { controleurV1 = pControleur; };
	ControleurJeuV1* getControleur() { return controleurV1; }
	void afficheTour(Joueur& joueurActuel) override;
};
#endif