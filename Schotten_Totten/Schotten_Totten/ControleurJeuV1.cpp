#include "ControleurJeuV1.h"
#include "VueJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

inline ControleurJeuV1::ControleurJeuV1() : ControleurJeu(new VueJeuV1())
{
	getVue()->setControleur(this); // On doit le mettre ici car l'attribut du controleur est dans VueJeuV1 
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
	EtatJeu* etatJeu = EtatJeu::getInstance(plateauBuilder);
	setEtatJeu(etatJeu);
	PiocheClan* piocheClan = getEtatJeu()->getPlateau()->getPiocheClan();
	ControleurPioche* controleurPiocheClan = new ControleurPioche(piocheClan);

	for (unsigned int i = 0; i < 6; i++) {
		controleurPiocheClan->piocher( *(getEtatJeu()->getJoueur1()) );
		controleurPiocheClan->piocher( *(getEtatJeu()->getJoueur2()) );
	}

	ChoixUtilisateur * choixU = ChoixUtilisateur::getChoixUtilisateur();
	if(choixU->estHvsH()){
		controleurPerso1 = new ControleurHumain();
		controleurPerso2 = new ControleurHumain();
	}
	else if (choixU->estHvsIA()) {
		controleurPerso1= new ControleurHumain();
		controleurPerso2 = new ControleurIAAlea();
	}
	else {
		controleurPerso1 = new ControleurIAAlea();
		controleurPerso2 = new ControleurIAAlea();
	}
	demandeCarte = new ControleurDemandeCarte();
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

