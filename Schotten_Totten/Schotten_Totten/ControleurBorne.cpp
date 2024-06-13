#include "ControleurBorne.h"
//il faut que le bn pour rrevndiquer soit bon a voir 
vector<string> ControleurBorne::calculeTypeLstJoueur(Borne& borne)
{
	vector<string> resultatJoueur;
	//for joueur 1 puis joueur 2

	vector<CarteClan*> c1=borne.getCartesJ1();
	Couleurs couleurCarte = (*c1.begin())->getCouleur();
	int valeurCarte = (*c1.begin())->getValeur();
	bool brelan = true;
	bool suiteCoul = true;
	bool suite = true;
	bool couleur = true;
	int cpt = 0;
	for (auto it1 = c1.begin()++; it1 < c1.end(); it1++) {
		if ((*it1)->getCouleur() != couleurCarte) {
			couleur = false; //testCouleur fait
			suiteCoul = false; //test suiteCoul a faire
		}
		if ((*it1)->getValeur() != valeurCarte) {
			brelan = false;	//test brelan fait
		}
		if ((*it1)->getValeur() == (--*it1)->getValeur()+1) {
			cpt += 1;
		}
	}
	if (cpt != borne.getNbCartesRevendiquer()) {
		suite = false;
	}
	if (suite && couleur){
		resultatJoueur.push_back("suite couleur");
	}
	else if (suite) {
		resultatJoueur.push_back("suite");
	}
	else if (couleur) {
		resultatJoueur.push_back("couleur");
	}
	else if (brelan) {
		resultatJoueur.push_back("brelan");
	}
	//testSomme si aucun des 4 autres
	else if (!(brelan && suiteCoul && couleur)) {
		resultatJoueur.push_back("Somme");
	}
	

	return vector<string>();
}

void ControleurBorne::calculeRevendication(Joueur& joueur, Borne& borne)
{
	vector<string> lst = calculeTypeLstJoueur(borne);
}
