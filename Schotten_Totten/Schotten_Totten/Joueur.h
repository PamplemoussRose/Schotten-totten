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
	Joueur() : nbreCartesTactiquesJou�s(0), mainJoueur() {};

	/*!
	* \brief construit Joueur avec nombre de cartes en parametre
	*/
	Joueur(int nbreCartesParam) : nbreCartesTactiquesJou�s(0), mainJoueur() {
		nbreCartes = nbreCartesParam;
	}
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
	* \brief retourne une carte de la main a une position donnee
	*/
	Carte* getCarteMainPosition(unsigned int position);

	/*!
	* \brief retire carte dans sa main
	*/
	void retireCarte(Carte& carte);
};

#endif