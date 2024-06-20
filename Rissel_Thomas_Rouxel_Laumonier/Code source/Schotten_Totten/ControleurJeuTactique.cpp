#include "ControleurJeuTactique.h"
#include "VueJeuTactique.h"
ControleurJeuTactique* ControleurJeuTactique::instance = nullptr;

inline ControleurJeuTactique::ControleurJeuTactique() :ControleurJeu(new VueJeuTactique())
{
}

ControleurJeuTactique* ControleurJeuTactique::getInstance()
{
	if (instance == nullptr) {
		//instance = new ControleurJeuTactique();

	}
	return instance;
}

ControleurJeuTactique::~ControleurJeuTactique() {
	instance = nullptr;
};

void ControleurJeuTactique::initPartie()
{
}

void ControleurJeuTactique::jouerCarteSurBorne(CarteClan& carte, Borne& borne)
{
	if (true) {// si joueur 1
		borne.AjouterCarteJ1(carte);
	}
	else {
		borne.AjouterCarteJ2(carte);
	}
}


void ControleurJeuTactique::finPartie()
{
}
