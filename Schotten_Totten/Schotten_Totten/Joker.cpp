#include "Joker.h"

vector<vector<unsigned int>> Joker::choixEffet() {
	/* RECUPERATION DES CHOIX */
	return vector<vector<unsigned int>>();
}

void Joker::effet(unsigned int val, unsigned int coul, unsigned int numBorne) {
	setValeur(val);
	/* GESTION DE LA COULEUR EN FONCTION DE 'coul' */
	Couleurs couleur = Couleurs::violet;
	setCouleur(couleur);
	/* GESTION DU PLACEMENT DE LA CARTE SUR LE PLATEAU */
}