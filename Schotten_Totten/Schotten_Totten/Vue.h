#ifndef GUARD_VUE
#define GUARD_VUE

#include <iostream>

using namespace std;

#include <iostream>
class Vue
{
	/*
private:
	//Attributs
	Controleur* controleur;

public:
*/
	//Methodes
	/*!
	* \definit le controleur
	*/
	//void setControleur(Controleur* pControleur) { controleur = pControleur; };
	/*!
	* \Recupere le controleur
	*/
	//Controleur* getControleur() { return controleur; };

public:
	/*!
	* \methode virtuelle d'affichage
	*/
	virtual void affiche()=0;
};

#endif