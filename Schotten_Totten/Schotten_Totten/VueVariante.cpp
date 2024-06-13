#include "VueVariante.h"

void VueVariante::affiche() {
	afficheTitre();
	afficheChoixVariantes();
}

void VueVariante::afficheTitre() {
	cout << "SCHOTTEN TOTTEN" << endl;
}

void VueVariante::afficheChoixVariantes() {
	int choix;

	cout << "Veuillez choisir la variante du jeu :" << endl;
	cout << "\t1. Jeu classique" << endl;
	cout << "\t2. Jeu classique" << endl;
	cout << "Choix : ";
	cin >> choix;
	getControleur()->choisirVariante(choix);
}

void VueVariante::erreurChoixVariante() {
	cout << "Faut savoir lire" << endl;
	afficheChoixVariantes();
}