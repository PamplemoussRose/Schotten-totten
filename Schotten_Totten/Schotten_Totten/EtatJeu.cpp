#include "EtatJeu.h"
EtatJeu* EtatJeu::instance = nullptr;

EtatJeu* EtatJeu::getInstance(Builder* plateauBuilder)
{
	if (instance == nullptr) {
		instance = new EtatJeu(plateauBuilder);
	}
	return instance;
}

EtatJeu::EtatJeu(Builder* plateauBuilder) {
	plateau = plateauBuilder->getResult();
	joueur1 = new Joueur();
	joueur2 = new Joueur();
	joueurActuel = 1;
}

/* Pour initialiser plateau
controleurPiocheClan->melanger(*piocheClan);
	//chaque joueur pioche 6 cartes clan de la pioche clan
	for (int carte = 0; carte < 6; carte++) {
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur1()));
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur2()));
	}
*/
