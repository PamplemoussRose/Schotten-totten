#ifndef CARTECLAN_HEADER
#define CARTECLAN_HEADER
#include "Carte.h"
using namespace std;

class CarteClan : public Carte {
private:
	string couleur;
	int valeur;
public:
	string getCouleur(){ return couleur; };
	int getValeur(){ return valeur; };
	void setCouleur(string nouvCoul) { couleur = nouvCoul; };
	void setValeur(int nouvVal) { valeur = nouvVal; };

};
#endif