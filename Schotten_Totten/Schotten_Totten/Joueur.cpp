#include "Joueur.h"

void Joueur::ajoutCarte(Carte& carte)
{
	mainJoueur.push_back(&carte);
	nbreCartes += 1;
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

void Joueur::retireCarte(Carte& carte)
{
	//enleve la carte  dans la mainJoueur
	auto it = std::find(mainJoueur.begin(), mainJoueur.end(), carte);
	if (it != mainJoueur.end()) {
		// Effacer l'�l�ment trouv�
		mainJoueur.erase(it);
		nbreCartes -= 1;
}

