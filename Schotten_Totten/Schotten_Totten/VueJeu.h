#ifndef VUEJEU_HEADER
#define VUEJEU_HEADER
#include"Vue.h"
#include "VueDemandeCarte.h"
#include "Joueur.h"
#include "CarteClan.h"
#include "CarteTactique.h"

class VueJeu : public Vue 
{
private:
	//Attributs
	VueDemandeCarte* demandeCarte;
public:
	//Methode
	/*!
	* \affiche la vue pour jouer
	*/
	void affiche();
	/*!
	* \affiche sur console la carte clan
	*/
	void afficheCarteClan(CarteClan* carte);
	/*!
	* \affiche sur console la carte tactique
	*/
	void afficheCarteTactique(CarteTactique* carte);
	/*!
	* \affiche sur console la carte
	*/
	void afficheCarte(Carte* carte);
	/*!
	* \retourne sur la console les bornes du jeu
	*/
	void afficheBornes();
	/*!
	* \affiche la main du joueur en cours
	*/
	void afficheMain(Joueur& joueur);
	/*!
	* \affiche la carte choisit par l'adversaire
	*/
	void afficheCarteJouee(Carte* carte);
	/*!
	* \affiche la carte piochee par le joueur en cours
	*/
	void affichecartePiochee(Carte* carte);
	/*!
	* \affiche le gagnant du jeu
	*/
	void afficheGagnant(Joueur* joueur);
	
};
#endif