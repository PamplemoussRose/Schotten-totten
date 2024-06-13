#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
class ControleurJeuV1 : public ControleurJeu{
	//Attributs
private:
	ControleurPioche* ControleurPioche;
public:
	/*!
	* \ initialise la partie
	*/
	virtual void initPartie();
	/*!
	* \deroulement du tour
	*/
	virtual void deroulementTours();
	/*!
	* \deroulement de la partie
	*/
	virtual void deroulementPartie();
	/*!
	* \ fin de la partie
	*/
	virtual void finPartie();
};
#endif