#include "ControleurJeuV1.h"
#include "VueJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

inline ControleurJeuV1::ControleurJeuV1(Builder* plateauBuilder) : ControleurJeu(new VueJeuV1())
{
	initPartie(plateauBuilder);
}

ControleurJeuV1* ControleurJeuV1::getInstance(Builder* plateauBuilder)
{
	if (instance == nullptr) {
		instance = new ControleurJeuV1(plateauBuilder);
	}
	return instance;
}

ControleurJeuV1::~ControleurJeuV1()
{
	instance = nullptr;
}

void ControleurJeuV1::initPartie(Builder* plateauBuilder) {
	EtatJeu* etatJeu = EtatJeu::getInstance(plateauBuilder);
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

void ControleurJeuV1::jouerCarteSurBorne(CarteClan& carte, Borne& borne)
{
	if (getJoueurActuel()==1) { // si joueur 1
		borne.AjouterCarteJ1(carte);
	}
	else {
		borne.AjouterCarteJ2(carte);
	}

}

void ControleurJeuV1::deroulementPartie()
{
}


void ControleurJeuV1::finPartie() {


	delete getEtatJeu()->getPlateau()->getInstance();
}

