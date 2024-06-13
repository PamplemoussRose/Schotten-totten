#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"

class Carte;

class Joueur {
private:
	//Attributs
	int nbreCartes; //nombre de cartes dans sa main
	int nbreCartesTactiquesJou�s;
	vector<Carte*> mainJoueur;
public:
	//Constructeur
	/*!
	* \brief construit Joueur
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
	void ajoutCarte(Carte& carte);
	/*!
	* \brief retourne main joueur
	*/
	vector<Carte*> getMainJoueur() {return mainJoueur;};
	/*!
	* \brief retire carte dans sa main
	*/
	void retireCarte(unsigned int indice);
};

#endif