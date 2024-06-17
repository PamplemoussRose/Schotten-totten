#include "ControleurPioche.h"

void ControleurPioche::piocher(Pioche& pioche,Joueur& joueur)
{
	Carte* carte;
	carte=pioche.enleverCarteDessus();
	joueur.ajoutCarte(*carte);
}

bool ControleurPioche::estVide(Pioche& pioche)
{
	return (pioche.getNbCartesRestantes() == 0);
}



