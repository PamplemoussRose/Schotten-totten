#ifndef ETATJEU_HEADER
#define ETATJEU_HEADER
#include "Plateau.h"
#include "Joueur.h"


class EtatJeu {
private:
	//Attributs
	EtatJeu* instance;
	shared_ptr<Plateau> plateau;
	shared_ptr<Joueur> joueur1;
	shared_ptr<Joueur> joueur2;
	/*!
	* \brief Constructeur privé
	*/
	//EtatJeu();
public:

	//Methodes
	/*!
	* \brief retourne l'instance unique de la classe
	*/
	//EtatJeu* getInstance();
 
	// Suppression des constructeurs de copie et d'affectation
	//EtatJeu(const EtatJeu&) = delete;
	//EtatJeu& operator=(const EtatJeu&) = delete;
	/*!
	* \brief retourne le plateau
	*/
	//shared_ptr<Plateau> getPlateau() { return plateau; };
	/*!
	* \brief retourne le joueur1
	*/
	//shared_ptr<Joueur> getJoueur1() { return joueur1; };
	/*!
	* \brief retourne le joueur2
	*/
	//shared_ptr<Joueur> getJoueur2() { return joueur2; };

};

#endif
