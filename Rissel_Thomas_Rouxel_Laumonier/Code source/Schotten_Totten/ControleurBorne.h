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
	* \brief calcule type liste carte des 2 joueurs
	*/
	vector<string> combinaisonCartesJoueur(Borne& borne);
	/**
* \brief retourne vrai si cette borne peut etre revendiquée
*/
	bool revendicable(Borne& borne);
	/*!
	* \brief retourne 1 si joueur1 l'emporte 2 sinon
	*/
	int calculeRevendication(Borne& borne);
	/*!
	* \brief met le nb de cartes pour revendiquer à 4
	*/
	void modeCombatBoue(Borne& borne);
	/*!
	* \brief la seule combinaison pour cette borne sera la somme
	*/
	void modeColinMaillard(Borne& borne);
};
#endif