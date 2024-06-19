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
	vector<ControleurBorne*> controleurBornes;
	VueJeu* vueJeu;
	EtatJeu* etatJeu;
	int joueurAct; //1 ou 2
protected:
	ControleurJeu(VueJeu* vue);
public:
	VueJeu* getVue() {return vueJeu;};

	vector<ControleurBorne*> getBornes(){ return controleurBornes; };

	int getJoueurActuel() { return joueurAct; };
	/*!
	* \retourne etatJeu
	*/
	EtatJeu* getEtatJeu() { return etatJeu; };
	/*!
	* \methode virtuelle pour initialiser la partie
	*/
	virtual void initPartie()=0;
	/*!
	* \ revendique la borne avec ce numero
	*/
	void revendiqueBorne(unsigned int numBorne);

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