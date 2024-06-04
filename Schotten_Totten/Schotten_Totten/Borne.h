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
	void setNumero(int nouvNum) { numero = nouvNum; };
	int getSatut() { return statut; };
	void setStatut(int nouvStat) { statut = nouvStat; };
	unsigned int getNbCartesRevendiquer() { return nbCartesRevendiquer;};
	vector<CarteClan&> getCartesJ1();
	vector<CarteClan&> getCartesJ2();
	void AjouterCartesJ1(CarteClan carteJ1);
	void AjouterCartesJ2(CarteClan carteJ2);

};
#endif
