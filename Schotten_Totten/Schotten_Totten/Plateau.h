#ifndef PLATEAU_HEADER
#define PLATEAU_HEADER
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
#include "Borne.h"
#include "Pioche.h"
using namespace std;

class Plateau{
private:
	vector<Borne> vBornes;
	vector<Pioche> vPioche;
public:
/********************************************************
* setBornes
* Entree : vector des bornes
* Sorties : void
* Entraine : defini les bornes du plateau
*********************************************************/
	void setBornes(vector<Borne> lstBornes);
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
	void setPioche(vector<Pioche> lstPioche);
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

