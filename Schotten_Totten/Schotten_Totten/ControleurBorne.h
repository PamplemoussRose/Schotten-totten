#ifndef CONTROLEURBORNE_HEADER
#define CONTROLEURBORNE_HEADER
#include <vector>
using namespace std;
#include "Joueur.h"
#include "Borne.h"
class ControleurBorne{

public:
	/*!
	* \calcule type liste carte des 2 joueurs
	*/
	vector<string> calculeTypeLstJoueur(Borne& borne);
	/*!
	* \calcule la revendication par un joueur
	*/
	void calculeRevendication(Joueur& joueur,Borne& borne);
	/*!
	* \met en mode combat boue la borne
	*/
	void modeCombatBoue(Borne& borne);
	/*!
	* \met en mode Colin maillard la borne
	*/
	void ModeColinMaillard(Borne& borne);
};
#endif