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

unsigned int Plateau::getMaxCartesJ2()
{
	vector<unsigned int> nbCartesBornesJ2;
	for (int i = 0; i < 9; i++) {
		nbCartesBornesJ2.push_back(vBornes[i]->getCartesJ2().size());
	}
	return *max_element(nbCartesBornesJ2.begin(), nbCartesBornesJ2.end());
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

void Plateau::setPiocheClan(Pioche* &&newPioche)
{
	this->piocheClan = move(newPioche);
}
void Plateau::setPiocheTactique(Pioche*&& newPioche)
{
	this->piocheTactique = move(newPioche);
}
/*
Pioche Plateau::getPiochePosition(unsigned int position)
{
	if (position < 0 || position >= *piocheClan.size()) {
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
*/
