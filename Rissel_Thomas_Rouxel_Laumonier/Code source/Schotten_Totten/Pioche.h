#ifndef PIOCHE_HEADER
#define PIOCHE_HEADER
#include "Carte.h"
#include <random>
using namespace std;

class Carte;

class Pioche {
private:
	//Attributs
	unsigned int nbCartesRestantes;
	unsigned int nbTotal;
	vector<Carte*> pioche;
public:
	//Methodes
	/*!
	* \brief assigne une nouvelle valuer au nombre de cartes restantes
	*/
	void setNbCartesRestantes(unsigned int nbReste) { nbCartesRestantes = nbReste; }
	/*!
	* \brief retourne nombre cartes restantes dans pioche
	*/
	unsigned int getNbCartesRestantes() { return nbCartesRestantes; }
	/*!
	* \brief assigne une nouvelle valeur au nopbre de carte total
	*/
	void setNbTotal(unsigned int nbTot) { nbTotal = nbTot; }
	/*!
	* \brief retourne nombre total des le depart
	*/
	unsigned int getNbTotal() { return nbTotal; }
	/*!
	* \brief retourne pioche de cartes
	*/
	vector<Carte*>& getPioche() { return pioche; }
	/*!
	* \brief enleve une carte de la pioche et la renvoie
	*/
	Carte* enleverCarteDessus();
	/*!
	* \brief ajoute  la carte en dessous de la pioche (debut du vector)
	*/
	void ajouterDessous(Carte& carte);
	/*!
	* \brief melange les cartes de la pioche
	*/
	void melange();

};
#endif