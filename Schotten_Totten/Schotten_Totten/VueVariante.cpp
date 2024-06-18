#include "VueVariante.h"

void VueVariante::affiche() {
	afficheTitre();
	afficheChoixVariantes();
}

void VueVariante::afficheTitre() {
	cout << "-----------------" << endl;
	cout << "|SCHOTTEN TOTTEN|" << endl;
	cout << "-----------------" << endl;
}

void VueVariante::afficheChoixVariantes() {
	unsigned int choix;

	cout << "Veuillez choisir la variante du jeu :" << endl;
	cout << "\t1. Jeu classique" << endl;
	cout << "\t2. Jeu tactique" << endl;
	cout << "Choix : ";
	cin >> choix;
	try {
		getControleur()->choisirVariante(choix);
	}
	catch (exception exp) {
		erreurChoixVariante();
	}
}

void VueVariante::erreurChoixVariante() {
	cout << " \033[41m " << "Numero de variante non valide" << " \033[0m" << endl;
	afficheChoixVariantes();
}