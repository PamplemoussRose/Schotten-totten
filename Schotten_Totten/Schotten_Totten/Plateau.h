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
	vector<Borne*> vBornes;
	vector<Pioche*> vPioche;
public:
	//Methodes
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
	* \brief defini la pioche du plateau
	*/
	void setPioche(vector<Pioche*>&& lstPioche);
	/*!
	* \brief retourne un pointeur vers la pioche
	*/
	vector<Pioche*> getPioche();
	/*!
	* \brief retourne un pointeur vers la pioche a une position donnee
	*/
	Pioche getPiochePosition(unsigned int position);
};
#endif
