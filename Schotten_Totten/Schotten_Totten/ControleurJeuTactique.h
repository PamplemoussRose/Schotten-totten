#ifndef CONTROLERJEUTACTIQUE_HEADER
#define CONTROLERJEUTACTIQUE_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurPersonnage.h"
#include "ControleurDemandeCarte.h"
class ControleurJeuTactique : public ControleurJeu {
	//Attributs
private:
	ControleurPioche* controleurPiocheClan;
	ControleurPioche* controleurPiocheTactique;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
	static ControleurJeuTactique* instance;
	inline ControleurJeuTactique() :ControleurJeu() {}
public:
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	ControleurJeuTactique* getInstance();

	// Suppression des constructeurs de copie et d'affectation
	ControleurJeuTactique(const ControleurJeuTactique&) = delete;
	ControleurJeuTactique& operator=(const ControleurJeuTactique&) = delete;
	/**
	* Destruction de l'instance
	*/
	~ControleurJeuTactique();
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