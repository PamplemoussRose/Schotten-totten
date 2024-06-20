#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurDemandeCarte.h"
#include "ControleurIAAlea.h"
#include "ControleurHumain.h"
#include "ChoixUtilisateur.h"
class VueJeuV1;
#include "Builder.h"

//classe de controleur jeu gerant la version normale
class ControleurJeuV1 : public ControleurJeu{
private:
	//Attributs
	ControleurPioche* controleurPiocheClan;
	ControleurPersonnage* controleurPerso1;
	ControleurPersonnage* controleurPerso2;
	ControleurDemandeCarte* demandeCarte;
	static ControleurJeuV1* instance;
	/*!
	* \brief constructeur de jeuV1
	*/
	inline ControleurJeuV1(Builder* plateauBuilder);
public:
	/*!
	* \brief retourne le controleur de la pioche clan
	*/
	ControleurPioche* getControPioche() { return controleurPiocheClan; };
	ControleurPersonnage* getControPerso1() { return controleurPerso1; };
	ControleurPersonnage* getControPerso2() { return controleurPerso2; };
	ControleurDemandeCarte* getDemandeCarte() { return demandeCarte; };
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
	* \ le joueur actuel joue la carte sur cette borne
	*/
	void jouerCarteSurBorne(CarteClan& carte, Borne& borne);

	/*!
	* \ fin de la partie
	*/
	void finPartie();
};
#endif