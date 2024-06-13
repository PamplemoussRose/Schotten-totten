#ifndef BORNE_HEADER
#define BORNE_HEADER
#include "CarteClan.h"
#include <memory>
#include <iostream>
class CarteClan;

class Borne {
private:
	//Attributs
	int numero;
	int statut;
	unsigned int nbCartesRevendiquer;
	vector<CarteClan*> cartesJ1;
	vector<CarteClan*> cartesJ2;
public:
	Borne() :cartesJ1(), cartesJ2() {};
	//Methodes
	/*!
	* \brief retourne le numero
	*/
	int getNumero(){ return numero; };
	/*!
	* \brief remplace le numero par un nouveau
	*/
	void setNumero(int nouvNum) { numero = nouvNum; };
	/*!
	* \brief retourne le statut de la borne
	*/
	int getSatut() { return statut; };
	/**
	* \brief remplace le statut par un nouveay
	*/
	void setStatut(int nouvStat) { statut = nouvStat; };
	/*!
	* \brief retourne le le nombre de cartes pour revendiquer la borne
	*/
	unsigned int getNbCartesRevendiquer() { return nbCartesRevendiquer;};
	unsigned int setNbCartesRevendiquer(unsigned int nb) { nbCartesRevendiquer = nb; };
	/*!
	* brief retourne les cartes de J1 sur la borne
	*/
	vector<CarteClan*> getCartesJ1() { return cartesJ1; };
	/**
	* \brief retourne les cartes de J2 sur la borne
	*/
	vector<CarteClan*> getCartesJ2() { return cartesJ2; };
	/*!
	* \brief Ajoute une carte de J1 � la borne
	*/
	void AjouterCarteJ1(CarteClan& carteJ1);
	/*!
	* \brief Ajoute une carte de J2 � la borne
	*/
	void AjouterCarteJ2(CarteClan& carteJ2);

};
#endif
