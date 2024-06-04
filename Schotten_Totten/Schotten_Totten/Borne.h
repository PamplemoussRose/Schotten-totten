#ifndef BORNE_HEADER
#define BORNE_HEADER
#include "CarteClan.h"
#include <memory>
class Borne {
private:
	int numero;
	int statut;
	unsigned int nbCartesRevendiquer;
	vector<unique_ptr<CarteClan>> cartesJ1;
	vector<unique_ptr<CarteClan>> cartesJ2;
public:
	int getNumero(){ return numero; };
	int getSatut() { return statut; };
	unsigned int getNbCartesRevendiquer() { return nbCartesRevendiquer;};
	vector<CarteClan&> getCartesJ1();
	vector<CarteClan&> getCartesJ2();

};
#endif
