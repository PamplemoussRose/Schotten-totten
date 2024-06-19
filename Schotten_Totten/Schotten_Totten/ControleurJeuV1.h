#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
#include "ControleurDemandeCarte.h"
#include "ControleurIAAlea.h"
#include "ControleurHumain.h"
#include "ChoixUtilisateur.h"
class VueJeuV1;

//classe de controleur jeu gérant la version normale
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
	inline ControleurJeuV1();
public:
	/*!
	* \brief retourne le controleur de la pioche clan
	*/
	ControleurPioche* getControPioche() { return controleurPiocheClan; };
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	static ControleurJeuV1* getInstance();

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
	void initPartie();

	/*!
	* \ le joueur actuel joue la carte sur cette borne
	*/
	void jouerCarteSurBorne(CarteClan& carte, Borne& borne);

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