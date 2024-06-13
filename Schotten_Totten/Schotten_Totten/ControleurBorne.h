#ifndef CONTROLEURBORNE_HEADER
#define CONTROLEURBORNE_HEADER
#include <vector>
using namespace std;
#include "Joueur.h"
#include "Borne.h"
class ControleurBorne{

public:
	unsigned int sommeCartes(vector<CarteClan*> cartes);
	/*!
	* \calcule type liste carte des 2 joueurs
	*/
	vector<string> combinaisonCartesJoueur(Borne& borne);
	/*!
	* \retourne 1 si joueur1 l'emporte 2 sinon
	*/
	void calculeRevendication(Borne& borne);
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