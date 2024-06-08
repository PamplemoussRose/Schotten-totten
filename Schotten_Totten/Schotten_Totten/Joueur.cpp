#include "Joueur.h"

void Joueur::ajoutCarte(Carte& carte)
{
	mainJoueur.push_back(&carte);
}
/* //avec Carte nom possible car toute Carte==Carte car pas d'attributs
void Joueur::retireCarte(Carte& carte)
{
	for (auto itC = mainJoueur.begin(); itC!= mainJoueur.end(); ++itC) {
		if (**itC == carte) {
			mainJoueur.erase(itC);
		}
		return; // Sortir de la fonction après la suppression de la carte
	}
}
*/ 

