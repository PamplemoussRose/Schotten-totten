#ifndef CONTROLEURJEU_HEADER
#define CONTROLEURJEU_HEADER
#include <vector>
#include "ControleurBorne.h"
using namespace std;
#include "Controleur.h"
#include "EtatJeu.h"
#include "VueJeu.h"
#include"ControleurVictoire.h"

class Vue;
class VueJeu;

class ControleurJeu : public Controleur{
private:
	vector<ControleurBorne*> controleurBornes;
	VueJeu* vueJeu;
	EtatJeu* etatJeu;
	ControleurVictoire* controleurVictoire;
protected:
	ControleurJeu(VueJeu* vue);
public:
	VueJeu* getVue() { return (VueJeu*)Controleur::getVue();};

	vector<ControleurBorne*> getBornes(){ return controleurBornes; };

	ControleurVictoire* getControleurVictoire() { return controleurVictoire; };
	/*!
	* \retourne etatJeu
	*/
	EtatJeu* getEtatJeu() { return etatJeu; };
	/*!
	* \methode virtuelle pour initialiser la partie
	*/
	virtual void initPartie(Builder* plateauBuilder)=0;

	/*!
	* \methode virtuelle pour la fin de la partie
	*/
	virtual void finPartie()=0;

};
#endif