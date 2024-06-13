#ifndef CARTECLAN_HEADER
#define CARTECLAN_HEADER

#include "Carte.h"

class CarteClan : public Carte {
private:
	// Attributs 

	/* Couleur de la carte */
	string couleur;
	/* Valeur de la carte */
	unsigned int valeur;
public:
	// Constructeur
	
	// delete du constructeur par defaut pour garantir la coherence des cartes
	CarteClan() = delete;
	/*!
	* \brief constructeur à deux parametres
	*/
	CarteClan(string coul, unsigned int val) { couleur = coul; valeur = val; }

	// Methodes
	
	/*!
	* \brief retourne la couleur de la carte
	*/
	string getCouleur(){ return couleur; };
	/*!
	* \brief modifie la couleur de la carte
	*/
	void setCouleur(string nouvCoul) { couleur = nouvCoul; };
	/*!
	* \brief retourne la valeur de la carte
	*/
	int getValeur(){ return valeur; };
	/*!
	* \brief modifie la valeur de la carte
	*/
	void setValeur(int nouvVal) { valeur = nouvVal; };
	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* \brief methode d'effet de la carte
	*/
	void effet(unsigned int numBorne);
};

#endif // !CARTECLAN_HEADER