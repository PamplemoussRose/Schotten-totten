#ifndef CONTROLEURJEU_HEADER
#define CONTROLEURJEU_HEADER
#include <vector>
#include "ControleurBorne.h"
using namespace std;
#include "Controleur.h"
#include "EtatJeu.h"
#include "VueJeu.h"

class Vue;
class VueJeu;

class ControleurJeu : public Controleur{
private:
	vector<ControleurBorne*> bornes;

	EtatJeu* etatJeu;
protected:
	ControleurJeu();

public:

	VueJeu* getVue();

	vector<ControleurBorne*> getBornes(){ return bornes; };
	/*!
	* \retourne etatJeu
	*/
	EtatJeu* getEtatJeu() { return etatJeu; };
	/*!
	* \methode virtuelle pour initialiser la partie
	*/
	virtual void initPartie(Builder* plateauBuilder)=0;
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