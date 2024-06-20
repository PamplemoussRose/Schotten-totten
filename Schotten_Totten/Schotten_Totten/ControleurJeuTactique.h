#ifndef CONTROLERJEUTACTIQUE_HEADER
#define CONTROLERJEUTACTIQUE_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurPersonnage.h"
#include "ControleurDemandeCarte.h"
class VueJeuTactique;

class ControleurJeuTactique : public ControleurJeu {
	//Attributs
private:
	ControleurPioche* controleurPiocheClan;
	ControleurPioche* controleurPiocheTactique;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
	static ControleurJeuTactique* instance;
	inline ControleurJeuTactique();
public:
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	ControleurJeuTactique* getInstance();
	ControleurPersonnage* getControPerso1() { return controleurPerso1; };
	ControleurPersonnage* getControPerso2() { return controleurPerso2; };
	ControleurPioche* getControPiocheTact() { return controleurPiocheTactique; };
	ControleurPioche* getControPiocheClan() { return controleurPiocheClan; };
	ControleurDemandeCarte* getDemandeCarte() { return demandeCarte; };
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
	* \ le joueur actuel joue la carte sur cette borne
	*/
	void jouerCarteSurBorne(CarteClan& carte, Borne& borne);

	/*!
	* \ fin de la partie
	*/
	void finPartie();

};
#endif