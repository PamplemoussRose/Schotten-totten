#ifndef VUEJEUTACTIQUE_HEADER
#define VUEJEUTACTIQUE_HEADER
#include "VueJeu.h"
#include "ControleurPioche.h"
class ControleurJeuTactique;

class VueJeuTactique : public VueJeu {
private:
	ControleurJeuTactique* controleurT;

public:
	void setControleur(ControleurJeuTactique* pControleur) { controleurT = pControleur; };
	ControleurJeuTactique* getControleur() { return controleurT; }
	/*!
	* \brief affichage du tour du joueur en version tactique
	*/
	void afficheTour(Joueur& joueurActuel) override;
};
#endif