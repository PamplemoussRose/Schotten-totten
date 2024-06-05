#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"


class Joueur {
private:
	//Attributs
	int nbreCartes;
	int nbreCartesTactiquesJou�s;
	vector<Carte*> mainJoueur;
public:
	//Constructeur
	/*!
	* \brief construit le joueur
	*/
	Joueur() :mainJoueur() {};
	//Methodes
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
	vector<Carte*> getMainJoueur() {return mainJoueur;};
};
#endif