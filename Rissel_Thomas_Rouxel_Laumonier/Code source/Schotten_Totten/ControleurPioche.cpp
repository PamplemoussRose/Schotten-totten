#include "ControleurPioche.h"

Carte* ControleurPioche::piocher(Joueur& joueur)
{
	Carte* carte;
	carte=pioche->enleverCarteDessus();
	joueur.ajoutCarte(*carte);
	return carte;
}

bool ControleurPioche::estVide()
{
	return (pioche->getNbCartesRestantes() == 0);
}

void ControleurPioche::melanger()
{
	pioche->melange();
}




