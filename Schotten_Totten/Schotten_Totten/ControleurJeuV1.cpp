#include "ControleurJeuV1.h"
#include "VueJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

inline ControleurJeuV1::ControleurJeuV1() : ControleurJeu(new VueJeuV1())
{
	getVue()->setControleur(this); // On doit le mettre ici car le l'attribut du controleur est dans VueJeuV1 
		// (On aurait préféré mettre un getControleur qui réutilise celui de VueJeu)
}

ControleurJeuV1* ControleurJeuV1::getInstance(Builder* plateauBuilder)
{
	if (instance == nullptr) {
		instance = new ControleurJeuV1();
		instance->initPartie(plateauBuilder);
	}
	return instance;
}

ControleurJeuV1::~ControleurJeuV1()
{
	instance = nullptr;
}

VueJeuV1* ControleurJeuV1::getVue() { return (VueJeuV1*)ControleurJeu::getVue(); }

void ControleurJeuV1::initPartie(Builder* plateauBuilder) {
	setEtatJeu(EtatJeu::getInstance(plateauBuilder));
	getEtatJeu()->getPlateau();
	PiocheClan* piocheClan = (PiocheClan*)(getEtatJeu()->getPlateau())->getPiocheClan();
	ControleurPioche* controleurPiocheClan = new ControleurPioche(piocheClan);

	controleurPiocheClan->melanger();

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
	if (getEtatJeu()->getNumJoueurActuel()==1) { // si joueur 1
		borne.AjouterCarteJ1(carte);
	}
	else {
		borne.AjouterCarteJ2(carte);
	}

}

void ControleurJeuV1::finPartie() {

	delete getEtatJeu()->getPlateau()->getInstance();
}

