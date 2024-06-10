#include "Plateau.h"

void Plateau::setBornes(vector<Borne*> &&lstBornes)
{
	this->vBornes = move(lstBornes);
}

vector<Borne*> Plateau::getBornes()
{
	return vBornes;
}

Borne* Plateau::getBornePosition(int position)
{
	if (position < 0 || position >= vBornes.size()) {
		throw ::invalid_argument("position given is not correct");
	}
	int cpt = 0;
	for (auto iter = vBornes.begin(); iter != vBornes.end() && cpt <= position; iter++, cpt++) {
		if (cpt == position) {
			return *iter;
		}
	}
	throw ::out_of_range("error dans getBornePosition");
}

void Plateau::setPioche(vector<Pioche*> &&lstPioche) 
{
	this->vPioche = move(lstPioche);
}

vector<Pioche*> Plateau::getPioche()
{
	return vPioche;
}

Pioche Plateau::getPiochePosition(int position)
{
	if (position < 0 || position >= vPioche.size()) {
		throw ::invalid_argument("position given is not correct");
	}
	int cpt = 0;
	for (auto iter = vPioche.begin(); iter != vPioche.end() && cpt <= position; iter++, cpt++) {
		if (cpt == position) {
			return **iter;
		}
	}
	throw ::out_of_range("error dans getPiochePosition");
}
