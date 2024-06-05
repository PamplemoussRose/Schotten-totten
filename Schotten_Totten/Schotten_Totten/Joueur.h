#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"


class Joueur {
private:
	int nbreCartes;
	int nbreCartesTactiquesJou�s;
	vector<unique_ptr<Carte>> mainJoueur;
public:
	/*!
	* \brief retourne nombre cartes
	*/
	int getNbreCartes() { return nbreCartes; };
	/*!
	* \brief retourne nombre cartes tactiques jou�s
	*/
	int getnbreCartesTactiquesJou�s() { return nbreCartesTactiquesJou�s; };
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