#include "ControleurBorne.h"
unsigned int ControleurBorne::sommeCartes(vector<CarteClan*> cartes)
{
	unsigned int somme=0;
	for (auto it = cartes.begin()++; it < cartes.end(); it++) {
		somme += (*it)->getValeur();
	}
	return somme;
}
//il faut que le nb pour rrevndiquer soit bon
vector<string> ControleurBorne::combinaisonCartesJoueur(Borne& borne)
{
	vector<string> resultatJoueur;
	vector<Carte*> cartes;
	for (int j = 1; j < 3; j++) {
		//Pour la liste de carte du joueur 1 puis du joueur 2
		if (j == 1) {
			cartes = borne.getCartesJ1();
		}
		else {
			cartes = borne.getCartesJ2();
		}
		vector<CarteClan*> cartesClan;
		// Copier les pointeurs de Carte* dans CarteClan*
		for (Carte* carte : cartes) {
			CarteClan* carteClan = dynamic_cast<CarteClan*>(carte);
			if (carteClan) {
				cartesClan.push_back(carteClan);
			}
		}

		Couleurs couleurCarte = (*cartesClan.begin())->getCouleur();
		int valeurCarte = (*cartesClan.begin())->getValeur();
		bool brelan = true;
		bool suiteCoul = true;
		bool suite = true;
		bool couleur = true;
		int cpt = 0;
		//Parcours des cartes
		for (auto it1 = cartesClan.begin()++; it1 < cartesClan.end(); it1++) {
			//si elles sont de couleurs différentes
			if ((*it1)->getCouleur() != couleurCarte) {
				couleur = false; //ce n'est pas une couleur
				suiteCoul = false; //ce n'est pas une suite de couleur
			}
			//si elle n(ont pas la meme valeur
			if ((*it1)->getValeur() != valeurCarte) {
				brelan = false;	//pas un brelan
			}
			//Si leur valeur se suivent
			if ((*it1)->getValeur() == (-- * it1)->getValeur() + 1) {
				cpt += 1;
			}
		}
		//si ces valeurs ne se suivent pas
		if (cpt != borne.getNbCartesRevendiquer()) {
			suite = false;//pas une suite
		}
		if (suite && couleur) { //si c est une suite de couleur
			resultatJoueur.push_back("suite couleur");
		}
		else if (suite) {//si c'est une suite
			resultatJoueur.push_back("suite");
		}
		else if (couleur) {//si c'est une couleur
			resultatJoueur.push_back("couleur");
		}
		else if (brelan) {// si c'est un brelan
			resultatJoueur.push_back("brelan");
		}
		//c'est une Somme si aucun des 4 autres
		else if (!(brelan && suiteCoul && couleur)) {
			resultatJoueur.push_back("Somme");
		}
	}
	return vector<string>();
}

int ControleurBorne::calculeRevendication(Borne& borne)
{
	vector<string> combi = combinaisonCartesJoueur(borne);
	int win = 0; //1: joueur 1 revendique 2: joueur 2 gagne
	//si egalité de combinaison
	if (combi[0]== combi[1]) {
		vector<Carte*> cJ1 = borne.getCartesJ1();
		vector<Carte*> cJ2 = borne.getCartesJ2();
		vector<CarteClan*> cartesClan1;
		// Copier les pointeurs de Carte* dans CarteClan*
		for (Carte* carte1 : cJ1) {
			CarteClan* carteClan1 = dynamic_cast<CarteClan*>(carte1);
			if (carteClan1) {
				cartesClan1.push_back(carteClan1);
			}
		}
		vector<CarteClan*> cartesClan2;
		// Copier les pointeurs de Carte* dans CarteClan*
		for (Carte* carte2 : cJ2) {
			CarteClan* carteClan2 = dynamic_cast<CarteClan*>(carte2);
			if (carteClan2) {
				cartesClan2.push_back(carteClan2);
			}
		}
		if (sommeCartes(cartesClan1) > sommeCartes(cartesClan2)) {
			win = 1;
		}
		else { win = 2; }
	}
	else if (combi[0] == "Suite couleur") { win = 1; }
	else if (combi[1] == "Suite couleur") { win = 2; }
	else if (combi[0] == "Brelan") { win = 1; }
	else if (combi[1] == "Brelan") { win = 2; }
	else if (combi[0] == "Couleur") { win = 1; }
	else if (combi[1] == "Couleur") { win = 2; }
	else if (combi[0] == "Suite") { win = 1; }
	else if (combi[1] == "Suite") { win = 2; }
	else { cout << "pas d'autres cas normalement" << endl; }
	return win;
}

void ControleurBorne::modeCombatBoue(Borne& borne)
{
	borne.setNbCartesRevendiquer(4);
}
bool ControleurBorne::revendicable(Borne& borne)
{
	return borne.revendicable();
}

