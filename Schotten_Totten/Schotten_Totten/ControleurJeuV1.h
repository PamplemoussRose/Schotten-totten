#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurPersonnage.h"
#include "ControleurDemandeCarte.h"
class ControleurJeuV1 : public ControleurJeu{
	//Attributs
private:
	ControleurPioche* controleurPioche;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
public:
	/*!
	* \ initialise la partie
	*/
	void initPartie();
	/*!
	* \deroulement du tour
	*/
	void deroulementTours();
	/*!
	* \deroulement de la partie
	*/
	void deroulementPartie();
	/*!
	* \ fin de la partie
	*/
	void finPartie();
};
#endif