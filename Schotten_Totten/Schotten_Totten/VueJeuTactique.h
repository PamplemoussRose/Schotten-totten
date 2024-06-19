#ifndef VUEJEUTACTIQUE_HEADER
#define VUEJEUTACTIQUE_HEADER
#include "VueJeu.h"
#include "ControleurPioche.h"
class ControleurJeuTactique;

class VueJeuTactique : public VueJeu {
private:
	ControleurJeuTactique* controleurT;
	ControleurPioche* controleurPiocheClan;
	ControleurPioche* controleurPiocheTactique;

public:
	void setControleur(ControleurJeuTactique* pControleur) { controleurT = pControleur; };
	ControleurJeuTactique* getControleur() { return controleurT; }
	void afficheTour(Joueur& joueurActuel) override;
};
#endif