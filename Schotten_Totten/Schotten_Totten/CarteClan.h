#ifndef CARTECLAN_HEADER
#define CARTECLAN_HEADER
#include "Carte.h"
using namespace std;

class CarteClan : public Carte {
private:
	//Atributs
	string couleur;
	int valeur;
public:
	//Methodes
	/**
	* \brief retourne couleur carte
	*/
	string getCouleur(){ return couleur; };
	/**
	* \brief retourne valeur carte
	*/
	int getValeur(){ return valeur; };
	/**
	* \brief modifie couleur carte
	*/
	void setCouleur(string nouvCoul) { couleur = nouvCoul; };
	/**
	* \brief modifie valeur carte
	*/
	void setValeur(int nouvVal) { valeur = nouvVal; };

};
#endif