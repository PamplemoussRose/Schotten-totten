#include "PorteBouclier.h"

vector<vector<unsigned int>> PorteBouclier::choixEffet() {
	/* RECUPERATION DES CHOIX */
	return vector<vector<unsigned int>>();
}

void PorteBouclier::effet(unsigned int val, unsigned int coul, unsigned int numBorne, unsigned int joueur) {
	setValeur(val);
	/* GESTION DE LA COULEUR EN FONCTION DE 'coul' */
	Couleurs couleur = Couleurs::violet;
	setCouleur(couleur);
	/* GESTION DU PLACEMENT DE LA CARTE SUR LE PLATEAU */
	
	if (joueur == 1) {

	}
	else if (joueur == 2) {

	}
	else {
		throw new exception("Joueur non valide");
	}
}