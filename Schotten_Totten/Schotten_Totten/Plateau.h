#ifndef PLATEAU_HEADER
#define PLATEAU_HEADER
#include "Borne.h"
class Plateau {
private:
	//Attributs
	vector<Borne*> Bornes;
public:
<<<<<<< Updated upstream
	//Methodes
	/*!
	* \brief retourne le vector des 9 bornes
	*/
	vector<Borne*> getBornes() {return Bornes;};
=======
/********************************************************
* setBornes
* Entree : vector des bornes
* Sorties : void
* Entraine : defini les bornes du plateau
*********************************************************/
	void setBornes(vector<Borne> &&lstBornes);
/********************************************************
* getBornes
* Sorties : retourne le vecteur borne
*********************************************************/
	vector<Borne> getBornes();
/********************************************************
* getBornePosition
* Entree : int position
* Sorties : l'objet borne present a une position donnee
*********************************************************/
	Borne getBornePosition(int position);
/********************************************************
* setPioche
* Entree : vector de la pioche
* Sorties : void
* Entraine : defini la pioche du plateau
*********************************************************/
	void setPioche(vector<Pioche> &&lstPioche);
/********************************************************
* getPioche
* Sorties : retourne le vecteur pioche
*********************************************************/
	vector<Pioche> getPioche();
/********************************************************
* getPiochePosition
* Entree : int position
* Sorties : l'objet pioche present a une position donnee
*********************************************************/
	Pioche getPiochePosition(int position);
};
#endif
>>>>>>> Stashed changes

};

#endif
