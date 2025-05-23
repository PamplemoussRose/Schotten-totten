#ifndef CARTETACTIQUE_HEADER
#define CARTETACTIQUE_HEADER

#include "Carte.h"

class CarteTactique : public Carte{
private:
	// Attributs

	/* nom de la carte */
	string nom;
public:
	// Constructeur
	
	// delete du constructeur par defaut pour garantir la coherence des cartes
	CarteTactique() = delete;
	/*!
	* \brief constructeur a un parametre
	*/
	CarteTactique(string nomCarte) { nom = nomCarte; }

	// Methodes

	/*!
	* \brief revoie le nom de la carte
	*/
	string getNom() { return nom; };
};
#endif // !CARTETACTIQUE_HEADER