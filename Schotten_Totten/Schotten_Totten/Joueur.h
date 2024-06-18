#ifndef JOUEUR_HEADER
#define JOUEUR_HEADER
#include "Carte.h"

class Carte;

class Joueur {
private:
	//Attributs
	unsigned int nbreCartes; //nombre de cartes dans sa main
	unsigned int nbreCartesTactiquesJou�s;
	vector<Carte*> mainJoueur;
public:
	//Constructeur
	/*!
	* \brief construit Joueur
	*/
	Joueur() : nbreCartesTactiquesJou�s(0), mainJoueur() {nbreCartes, nbreCartesTactiquesJou�s= 0;};

	/*!
	* \brief construit Joueur avec nombre de cartes en parametre
	*/
	Joueur(unsigned int nbreCartesParam) : nbreCartesTactiquesJou�s(0), mainJoueur() {
		nbreCartes = nbreCartesParam;
	}
	//Methodes
	/*!
	* \brief retourne nombre cartes
	*/
	unsigned int getNbreCartes() { return nbreCartes; };
	/*!
	* \brief retourne nombre cartes tactiques jou�s
	*/
	unsigned int getnbreCartesTactiquesJou�s() { return nbreCartesTactiquesJou�s; };
	/*!
	* \brief ajoute carte dans sa main
	*/
	void ajoutCarte(Carte& carte);
	/*!
	* \brief retourne main joueur
	*/
	vector<Carte*> getMainJoueur() {return mainJoueur;};
	/*!
	* \brief retourne une carte de la main a une position donnee
	*/
	Carte* getCarteMainPosition(unsigned int position);

	/*!
	* \brief retire carte dans sa main
	*/
	void retireCarte(Carte& carte);
};

#endif