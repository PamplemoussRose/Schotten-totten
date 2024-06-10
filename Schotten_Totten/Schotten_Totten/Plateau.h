#ifndef PLATEAU_HEADER
#define PLATEAU_HEADER
#include "Borne.h"
#include "Pioche.h"
#include <stdexcept>
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
	* \brief retourne un pointeur vers une borne d'une position donee
	*/
	Borne* getBornePosition(int position);
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
	Pioche getPiochePosition(int position);
};
#endif
