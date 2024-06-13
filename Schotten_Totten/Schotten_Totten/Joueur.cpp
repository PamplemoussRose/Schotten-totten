#include "Joueur.h"

void Joueur::ajoutCarte(Carte& carte)
{
	mainJoueur.push_back(&carte);
	nbreCartes += 1;
}

void Joueur::retireCarte(Carte& carte)
{
	//enleve la carte  dans la mainJoueur
	auto it = std::find(mainJoueur.begin(), mainJoueur.end(), carte);
	if (it != mainJoueur.end()) {
		// Effacer l'élément trouvé
		mainJoueur.erase(it);
		nbreCartes -= 1;
	}
}

