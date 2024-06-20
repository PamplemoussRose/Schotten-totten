#include "CarteClan.h"
#include "EtatJeu.h"

vector<unsigned int> CarteClan::effet(unsigned int numBorne, unsigned int joueur) {
	if (joueur == 1) {
		EtatJeu::getInstance()->getPlateau()->getBornePosition(numBorne)->AjouterCarteJ1(*this);
	}
	else if (joueur == 2) {
		EtatJeu::getInstance()->getPlateau()->getBornePosition(numBorne)->AjouterCarteJ2(*this);
	}
	else {
		throw new exception("Joueur non valide");
	}

	return { numBorne };
}

vector<vector<unsigned int>> CarteClan::choixEffet(unsigned int joueur) {
	unsigned int compteur = 0;
	vector<vector<unsigned int>> choix = vector<vector<unsigned int>>({ {},{joueur} }); // effet à besoin du numJoueur
	if (joueur == 1) {
		for (Borne* borne : EtatJeu::getInstance()->getPlateau()->getBornes()) {
			if (borne->getCartesJ1().size() >= borne->getNbCartesRevendiquer())
				choix.begin()->push_back(compteur);
			compteur++;
		}
		return choix;
	}
	else if (joueur == 2) {
		for (Borne* borne : EtatJeu::getInstance()->getPlateau()->getBornes()) {
			if (borne->getCartesJ2().size() >= borne->getNbCartesRevendiquer())
				choix.begin()->push_back(compteur);
			compteur++;
		}
		return choix;
	}
	else {
		throw new exception("Joueur non valide");
	}
}
