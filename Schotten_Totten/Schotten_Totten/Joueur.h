#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"


class Joueur {
private:
	int nbreCartes;
	int nbreCartesTactiquesJoués;
	vector<unique_ptr<Carte>> mainJoueur;
public:
	/*!
	* \brief retourne nombre cartes
	*/
	int getNbreCartes() { return nbreCartes; };
	/*!
	* \brief retourne nombre cartes tactiques joués
	*/
	int getnbreCartesTactiquesJoués() { return nbreCartesTactiquesJoués; };
	/*!
	* \brief ajoute carte dans sa main
	*/
	void ajoutCarte(Carte carte);
	/*!
	* \brief retourne main joueur
	*/
	vector<unique_ptr<Carte>> getMainJoueur();
};
#endif