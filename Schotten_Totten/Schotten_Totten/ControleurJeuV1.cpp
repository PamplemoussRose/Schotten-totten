#include "ControleurJeuV1.h"


ControleurJeuV1* ControleurJeuV1::getInstance()
{
	if (instance == nullptr) {
		instance = new ControleurJeuV1();
	}
	return instance;
}

void ControleurJeuV1::initPartie() {
	getEtatJeu()->getInstance();
	getEtatJeu()->getPlateau();
	PiocheClan* piocheClan = (PiocheClan*)(getEtatJeu()->getPlateau())->getPiocheClan();
	controleurPiocheClan->melanger(*piocheClan);
	//chaque joueur pioche 6 cartes clan de la pioche clan
	for (int carte = 0; carte < 6; carte++) {
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur1()));
		controleurPiocheClan->piocher(*piocheClan, *(getEtatJeu()->getJoueur2()));
	}
}