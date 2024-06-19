#include "ControleurPioche.h"

Carte* ControleurPioche::piocher(Pioche& pioche,Joueur& joueur)
{
	Carte* carte;
	carte=pioche.enleverCarteDessus();
	joueur.ajoutCarte(*carte);
	return carte;
}

bool ControleurPioche::estVide(Pioche& pioche)
{
	return (pioche.getNbCartesRestantes() == 0);
}

void ControleurPioche::melanger(Pioche& pioche)
{
	pioche.melange();
}




