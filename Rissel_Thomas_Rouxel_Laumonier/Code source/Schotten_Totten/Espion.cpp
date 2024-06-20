#include "Espion.h"

vector<vector<unsigned int>> Espion::choixEffet() {
	/* RECUPERATION DES CHOIX */
	return vector<vector<unsigned int>>();
}

void Espion::effet(unsigned int coul, unsigned int borne, unsigned int joueur) {
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