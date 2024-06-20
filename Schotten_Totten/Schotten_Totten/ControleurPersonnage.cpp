#include "ControleurPersonnage.h"

Carte* ControleurPersonnage::piocheV1(Pioche& pioche,ControleurPioche& controlPioche, Joueur& joueurActuel)
{
	if (pioche.getNbCartesRestantes() != 0) {
		Carte* cartePiochee = controlPioche.piocher(joueurActuel); //le joueur pioche
		cout << "Vous avez pioche";
		return cartePiochee;
	}
	else {
		cout << "Pioche vide" << endl;
		return nullptr;
	}
}
