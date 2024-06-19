#include "ControleurJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

ControleurJeuV1* ControleurJeuV1::getInstance()
{
	if (instance == nullptr) {
		instance = new ControleurJeuV1();
	}
	return instance;
}

ControleurJeuV1::~ControleurJeuV1()
{
	instance = nullptr;
}

void ControleurJeuV1::initPartie() {
	getEtatJeu()->getInstance();
	getEtatJeu()->getPlateau();
	PiocheClan* piocheClan = (PiocheClan*)(getEtatJeu()->getPlateau())->getPiocheClan();
	ControleurPioche* controleurPiocheClan = new ControleurPioche();
	ChoixUtilisateur* choixU=ChoixUtilisateur::getChoixUtilisateur();
	if(choixU->estHvsH()){
		ControleurPersonnage* controleurPerso1 = new ControleurHumain();
		ControleurPersonnage* controleurPerso2 = new ControleurHumain();
	}
	else if (choixU->estHvsIA()) {
		ControleurPersonnage* controleurPerso1= new ControleurHumain();
		ControleurPersonnage* controleurPerso2 = new ControleurIAAlea();
	}
	else {
		ControleurPersonnage* controleurPerso1 = new ControleurIAAlea();
		ControleurPersonnage* controleurPerso2 = new ControleurIAAlea();
	}
	ControleurDemandeCarte* controleurPerso2 = new ControleurDemandeCarte();
}

void ControleurJeuV1::deroulementTours()
{
}

void ControleurJeuV1::deroulementPartie()
{
}


void ControleurJeuV1::finPartie() {


	delete getEtatJeu()->getPlateau()->getInstance();
}

