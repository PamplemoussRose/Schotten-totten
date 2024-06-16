#ifndef CONTROLEURJEU_HEADER
#define CONTROLEURJEU_HEADER
#include <vector>
#include "ControleurBorne.h"
using namespace std;
#include "Controleur.h"

class ControleurJeu : Controleur{
private:
	vector<ControleurBorne*> bornes;
public:
	vector<ControleurBorne*> getBornes(){ return bornes; };
	/*!
	* \methode virtuelle pour initialiser la partie
	*/
	virtual void initPartie()=0;
	/*!
	* \methode virtuelle pour le deroulement du tour
	*/
	virtual void deroulementTours()=0;
	/*!
	* \methode virtuelle pour deroulement de la partie
	*/
	virtual void deroulementPartie()=0;
	/*!
	* \methode virtuelle pour la fin de la partie
	*/
	virtual void finPartie()=0;

};
#endif