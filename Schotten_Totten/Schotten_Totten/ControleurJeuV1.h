#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurDemandeCarte.h"
#include "ControleurIAAlea.h"
#include "ControleurHumain.h"

class ControleurJeuV1 : public ControleurJeu{
	//Attributs
private:
	ControleurPioche* controleurPiocheClan;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
	static ControleurJeuV1* instance;
	ControleurJeuV1() :ControleurJeu() { initPartie(); }
public:
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	static ControleurJeuV1* getInstance();

	// Suppression des constructeurs de copie et d'affectation
	ControleurJeuV1(const ControleurJeuV1&) = delete;
	ControleurJeuV1& operator=(const ControleurJeuV1&) = delete;
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