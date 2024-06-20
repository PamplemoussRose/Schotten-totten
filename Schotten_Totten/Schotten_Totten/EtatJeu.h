#ifndef ETATJEU_HEADER
#define ETATJEU_HEADER
#include "Plateau.h"
#include "Joueur.h"
#include "Builder.h"

class Plateau;
class Joueur;

class EtatJeu {
private:
	//Attributs
	static EtatJeu* instance;
	Plateau* plateau;
	Joueur* joueur1;
	Joueur* joueur2;
	unsigned int joueurActuel; //1 ou 2
	/*!
	* \brief Constructeur privé
	*/
	EtatJeu(Builder* plateauBuilder);
	EtatJeu() = delete;
public:

	//Methodes
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	static EtatJeu* getInstance(Builder* plateauBuilder = nullptr);
 
	// Suppression des constructeurs de copie et d'affectation
	EtatJeu(const EtatJeu&) = delete;
	EtatJeu& operator=(const EtatJeu&) = delete;
	/*!
	* \brief retourne le plateau
	*/
	Plateau* getPlateau() { return plateau; };
	/*!
	* \brief retourne le joueur1
	*/
	Joueur* getJoueur1() { return joueur1; };
	/*!
	* \brief retourne le joueur2
	*/
	Joueur* getJoueur2() { return joueur2; };
	unsigned int getNumJoueurActuel() { return joueurActuel; };
	Joueur* getJoueurActuel() {
		if (joueurActuel == 1) {
			return getJoueur1();
		}
		else if (joueurActuel==2) {
			return getJoueur2();
		}
	}
	void setnumJoueurActuel(unsigned int newJoueur) { joueurActuel = newJoueur; };
};

#endif
