#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurDemandeCarte.h"
#include "ControleurIAAlea.h"
#include "ControleurHumain.h"
#include "ChoixUtilisateur.h"
#include "Builder.h"

class ControleurJeuV1 : public ControleurJeu{
	//Attributs
private:
	ControleurPioche* controleurPiocheClan;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
	static ControleurJeuV1* instance;
	ControleurJeuV1(Builder* plateauBuilder) : ControleurJeu() { initPartie(plateauBuilder); }
public:
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	static ControleurJeuV1* getInstance(Builder* plateauBuilder = nullptr);

	// Suppression des constructeurs de copie et d'affectation
	ControleurJeuV1(const ControleurJeuV1&) = delete;
	ControleurJeuV1& operator=(const ControleurJeuV1&) = delete;
	/*!
	* Destruction de l'instance
	*/
	~ControleurJeuV1();
	/*!
	* \ initialise la partie
	*/
	void initPartie(Builder* plateauBuilder);
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