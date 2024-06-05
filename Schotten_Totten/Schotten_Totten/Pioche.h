#pragma once
#ifndef PIOCHE_HEADER
#define PIOCHE_HEADER
#include "Carte.h"
#include <random>
using namespace std;
class Pioche {
private:
	//Attributs
	int nbCartesRestantes;
	int nbTotal;
	vector<Carte*> pioche;
public:
	//Constructeur
	Pioche() :pioche() {};
	//Methodes
	/*!
	* \brief retourne nombre cartes restantes dans pioche
	*/
	int getNbCartesRestantes() { return nbCartesRestantes; };
	/*!
	* \brief retourne nombre total des le depart
	*/
	int getNbTotal() { return nbTotal; };
	/*!
	* \brief retourne pioche de cartes
	*/
	vector<Carte*>& getPioche() { return pioche; };
	/*!
	* \brief enleve une carte de la pioche et la renvoie
	*/
	Carte* enleverCarteDessus();
	/*!
	* \brief ajoute  la carte en dessous de la pioche (debut du vector)
	*/
	void ajouterDessous(Carte& carte);
};
#endif