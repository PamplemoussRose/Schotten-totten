#ifndef VUEJEUV1_HEADER
#define VUEJEUV1_HEADER
#include "VueJeu.h"
#include "ControleurPioche.h"
class ControleurJeuV1;

class VueJeuV1 : public VueJeu {
private:
	ControleurJeuV1* controleurV1;
public:
	void setControleur(ControleurJeuV1* pControleur) { controleurV1 = pControleur; };
	ControleurJeuV1* getControleur() { return controleurV1; }
	/*!
	* \brief affichage du tour du joueur en version normale
	*/
	void afficheTour(Joueur& joueurActuel) override;

	void affiche() override;
};
#endif