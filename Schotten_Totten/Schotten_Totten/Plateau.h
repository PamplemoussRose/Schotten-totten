#ifndef PLATEAU_HEADER
#define PLATEAU_HEADER
#include "Borne.h"
class Plateau {
private:
	//Attributs
	vector<Borne*> Bornes;
public:
	//Methodes
	/*!
	* \brief retourne le vector des 9 bornes
	*/
	vector<Borne*> getBornes() {return Bornes;};

};

#endif
