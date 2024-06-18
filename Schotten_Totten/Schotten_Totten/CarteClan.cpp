#include "CarteClan.h"
#include "EtatJeu.h"

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