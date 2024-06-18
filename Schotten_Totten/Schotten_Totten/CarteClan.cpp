#include "CarteClan.h"
#include "EtatJeu.h"

vector<vector<unsigned int>> CarteClan::choixEffet() {
	/* RECUPERATION DES CHOIX */
	return vector<vector<unsigned int>>();
}

void CarteClan::effet(unsigned int numBorne, unsigned int joueur) {
	if (joueur == 1) {
		EtatJeu::getInstance()->getPlateau()->getBornePosition(numBorne)->AjouterCarteJ1(*this);
	}
	else if (joueur == 2) {
		EtatJeu::getInstance()->getPlateau()->getBornePosition(numBorne)->AjouterCarteJ2(*this);
	}
	else {
		throw new exception("Joueur non valide");
	}
}

/*
, unsigned int joueur) {
	if (joueur == 1) {

	}
	else if (joueur == 2) {

	}
	else {
		throw new exception("Joueur non valide");
	}
*/