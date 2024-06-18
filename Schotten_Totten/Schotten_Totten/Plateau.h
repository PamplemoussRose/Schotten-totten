#ifndef PLATEAU_HEADER
#define PLATEAU_HEADER
#include "Borne.h"
#include "Pioche.h"
#include <stdexcept>

class Borne;
class Pioche;

class Plateau {
private:
	//Attributs
	static Plateau* instance;

	vector<Borne*> vBornes;
	Pioche* piocheClan;
	Pioche* piocheTactique;

	// Constructeur
	/*!
	* \brief Constructeur privé
	*/
	Plateau();

public:
	// Suppression des constructeurs de copie et d'affectation
	Plateau(const Plateau&) = delete;
	Plateau& operator=(const Plateau&) = delete;

	//Methodes
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	static Plateau* getInstance();
	/*!
	* \brief defini les bornes du plateau
	*/
	void setBornes(vector<Borne*> &&lstBornes);
	/*!
	* \brief retourne un pointeur vers les bornes
	*/
	vector<Borne*> getBornes();
	/*!
	* \brief retourne le nombre maximum de cartes du J1 sur cette borne
	*/
	unsigned int getMaxCartesJ1();
	/*!
	* \brief retourne le nombre maximum de cartes du J2 sur cette borne
	*/
	unsigned int getMaxCartesJ2();
	/*!
	* \brief retourne un pointeur vers une borne d'une position donnee
	*/
	Borne* getBornePosition(unsigned int position);
	/*!
	* \brief modifie la piocheClan du plateau
	*/
	void setPiocheClan(Pioche*&& newPioche);
	/*!
	* \brief modifie la piocheTactique du plateau
	*/
	void setPiocheTactique(Pioche*&& newPioche);
	/*!
	* \brief retourne un pointeur vers la piocheClan
	*/
	Pioche* getPiocheClan() {return piocheClan;};
	/*!
	* \brief retourne un pointeur vers la piocheClan
	*/
	Pioche* getPiocheTactique() { return piocheTactique; };
	/*!
	* \brief retourne un pointeur vers la pioche a une position donnee
	*/
	//Pioche getPiochePosition(unsigned int position);
};
#endif
