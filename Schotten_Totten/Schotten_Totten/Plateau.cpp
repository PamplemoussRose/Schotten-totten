#include "Plateau.h"

void Plateau::setBornes(vector<Borne*> &&lstBornes)
{
	this->vBornes = move(lstBornes);
}

vector<Borne*> Plateau::getBornes()
{
	return vBornes;
}

unsigned int Plateau::getMaxCartesJ1()
{
	vector<unsigned int> nbCartesBornesJ1;
	for (int i = 0; i < 9; i++) {
		nbCartesBornesJ1.push_back(vBornes[i]->getCartesJ1().size());
	}
	return *max_element(nbCartesBornesJ1.begin(), nbCartesBornesJ1.end());
}

Borne* Plateau::getBornePosition(unsigned int position)
{
	if (position < 0 || position >= vBornes.size()) {
		throw ::invalid_argument("position given is not correct");
	}
	unsigned int cpt = 0;
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

Pioche Plateau::getPiochePosition(unsigned int position)
{
	if (position < 0 || position >= vPioche.size()) {
		throw ::invalid_argument("position given is not correct");
	}
	unsigned int cpt = 0;
	for (auto iter = vPioche.begin(); iter != vPioche.end() && cpt <= position; iter++, cpt++) {
		if (cpt == position) {
			return **iter;
		}
	}
	throw ::out_of_range("error dans getPiochePosition");
}
