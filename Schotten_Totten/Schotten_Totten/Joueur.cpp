#include "Joueur.h"

void Joueur::ajoutCarte(Carte& carte)
{
	mainJoueur.push_back(&carte);
}
Carte* Joueur::getCarteMainPosition(unsigned int position)
{
	int i = 0;
	for (auto iter = mainJoueur.begin(); iter != mainJoueur.end(); iter++, i++) {
		if (i == position) {
			return *iter;
		}
	}
}
//avec Carte nom possible car toute Carte==Carte car pas d'attributs
void Joueur::retireCarte(unsigned int indice)
{
	//enleve la carte à l'indice indiqué dans la mainJoueur
	mainJoueur.erase(next(mainJoueur.begin(), indice));
}


