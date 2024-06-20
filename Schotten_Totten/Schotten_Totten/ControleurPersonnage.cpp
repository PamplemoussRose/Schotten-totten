#include "ControleurPersonnage.h"

Carte* ControleurPersonnage::piocheV1(ControleurPioche& controlPioche, Joueur& joueurActuel)
{
	if (controlPioche.getPioche()->getNbCartesRestantes() != 0) {
		Carte* cartePiochee = controlPioche.piocher(joueurActuel); //le joueur pioche
		cout << "Vous avez pioche";
		return cartePiochee;
	}
	else {
		cout << "Pioche vide" << endl;
		return nullptr;
	}
}
