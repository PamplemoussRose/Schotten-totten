#include "Joueur.h"

void Joueur::ajoutCarte(Carte& carte)
{
	mainJoueur.push_back(&carte);
}
 //avec Carte nom possible car toute Carte==Carte car pas d'attributs
void Joueur::retireCarte(unsigned int indice)
{
	//enleve la carte � l'indice indiqu� dans la mainJoueur
	mainJoueur.erase(next(mainJoueur.begin(), indice));
}


