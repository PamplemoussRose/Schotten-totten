#ifndef VUEJEU_HEADER
#define VUEJEU_HEADER
#include"Vue.h"
#include "VueDemandeCarte.h"
#include "Joueur.h"
#include "CarteClan.h"
#include "CarteTactique.h"
#include "Couleurs.h"
#include "ControleurJeu.h"
class ControleurJeu;
class VueJeu : public Vue
{
private:
	//Attributs
	VueDemandeCarte* demandeCarte;
	ControleurJeu* controleur;

public:
	void setControleur(ControleurJeu* pControleur) { controleur = pControleur; };
	ControleurJeu* getControleur() { return controleur; }
	/*!
	* \brief affiche la vue pour jouer
	*/
	void affiche();
	/*!
	* \brief affiche la fin de la partie
	*/
	void afficheFinPartie();
	/*!
	* \brief affiche le plateau
	*/
	void affichePlateau();
	/*!
	* \brief affichage du tour du joueur
	*/
	virtual void afficheTour(Joueur& joueurActuel) = 0;
	/*!
	* \brief affiche sur console la carte clan
	*/
	void afficheCarteClan(CarteClan* carte);
	/*!
	* \brief affiche sur console la carte tactique
	*/
	void afficheCarteTactique(CarteTactique* carte);
	/*!
	* \brief affiche sur console la carte
	*/
	void afficheCarte(Carte* carte);
	/*!
	* \brief retourne sur la console les bornes du jeu
	*/
	void afficheBornes();
	/*!
	* \brief affiche la main du joueur en cours
	*/
	void afficheMain(Joueur& joueur);
	/*!
	* \brief affiche la carte choisit par l'adversaire
	*/
	void afficheCarteJouee(Carte* carte);// -->UTILE??
	/*!
	* \brief affiche la carte piochee par le joueur en cours
	*/
	void affichecartePiochee(Carte* carte); //-->UTILE?
	/*!
	* \brief affiche le gagnant du jeu
	*/
	void afficheGagnant(Joueur* joueur);

};
#endif