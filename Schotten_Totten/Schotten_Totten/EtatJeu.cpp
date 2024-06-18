#include "EtatJeu.h"

EtatJeu* EtatJeu::getInstance()
{
	if (instance == nullptr) {
		instance = new EtatJeu();
	}
	return instance;
}

EtatJeu::EtatJeu() {
	plateau = NULL;
	joueur1 = NULL;
	joueur2 = NULL;
}

/* Pour initialiser plateau
controleurPiocheClan->melanger(*piocheClan);
	//chaque joueur pioche 6 cartes clan de la pioche clan
	for (int carte = 0; carte < 6; carte++) {
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur1()));
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur2()));
	}
*/
