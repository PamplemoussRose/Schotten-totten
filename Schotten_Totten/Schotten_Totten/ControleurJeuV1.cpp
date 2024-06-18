#include "ControleurJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

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
	ControleurPioche* controleurPiocheClan = new ControleurPioche();

	//ControleurPersonnage* controleurPerso2= new ControleurHumain();
	//ControleurPersonnage* controleurPerso1 = new ControleurIAAlea();

	ControleurDemandeCarte* controleurPerso2 = new ControleurDemandeCarte();
}