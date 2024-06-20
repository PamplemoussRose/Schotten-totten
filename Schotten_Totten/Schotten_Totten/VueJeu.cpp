#include "VueJeu.h"

void VueJeu::afficheFinPartie()
{
	if (controleur->getControleurVictoire()->estGagnant() == 1) {
		cout << "Joueur 1 a gagné !" << endl;
	}
	else {
		cout << "Joueur 2 a gagné !" << endl;
	}
}

void VueJeu::affichePlateau()
{

	// Plateau* plateau = (*(*controleur).getEtatJeu()).getPlateau();
	Plateau* plateau = (*(*controleur).getEtatJeu()).getPlateau();
	vector<Borne*> bornes = (*plateau).getBornes();
	//Affichage des cartes de Joueur 1 au dessus des bornes
	if ((*plateau).getMaxCartesJ1() != 0) {
		unsigned int maxJ1 = (*plateau).getMaxCartesJ1() - 1;
		for (unsigned int ligne = maxJ1; ligne > -1; ligne--) {
			for (unsigned int b = 0; b < 9; b++) {
				vector<Carte*> cartesJ1 = (*bornes[b]).getCartesJ1();
				if (cartesJ1.size() >= (static_cast<size_t>(ligne) + 1)) {
					afficheCarte(cartesJ1[ligne]);
				}
				else { cout << "   "; }
			}
			cout << endl;
		}
	}
	cout << endl;
	cout << endl;
	afficheBornes();
	cout << endl;
	cout << endl;
	//Affichage des cartes de Joueur 2 en dessous des bornes
	if ((*plateau).getMaxCartesJ2() != 0) {
		unsigned int maxJ2 = (*plateau).getMaxCartesJ2() - 1;
		for (unsigned int ligne = 0; ligne < maxJ2; ligne++) {
			for (unsigned int b = 0; b < 9; b++) {
				vector<Carte*> cartesJ2 = (*bornes[b]).getCartesJ2();
				if (cartesJ2.size() >= (static_cast<size_t>(ligne) + 1)) {
					afficheCarte(cartesJ2[ligne]);
				}
				else { cout << "   "; }
			}
			cout << endl;
		}
	}
}


void VueJeu::afficheCarteClan(CarteClan* carte)
{
	Couleurs cl = carte->getCouleur();
	int v = carte->getValeur();
	if (cl==Couleurs::rouge) {
		std::cout <<" \033[41m "<<v<<" \033[0m";
	}
	else if(cl == Couleurs::vert) {
		std::cout << " \033[42m "<<v<<" \033[0m" ;
	}
	else if (cl == Couleurs::jaune) {
		std::cout << " \033[43m " << v << " \033[0m" ;
	}
	else if (cl == Couleurs::violet) {
		std::cout << " \033[45m " << v << " \033[0m";
	}
	else if (cl == Couleurs::bleu) {
		std::cout << " \033[46m " << v << " \033[0m";
	}
	else if (cl == Couleurs::marron) {
		std::cout << " \033[94; 53; 17; 0; 255m "<< v<<" \033[0m";
	}	
}



void VueJeu::afficheCarteTactique(CarteTactique* carte)
{
	string nom = carte->getNom();
	if (nom=="Joker") {
		std::cout << " \033[40;37m J \033[0m";
	}
	else if (nom == "PorteBouclier") {
		cout << "\033[m 123 \033[0m " ;
	}
	else if (nom == "Espion") {
		cout << "\033[40;37m 7 \033[0m " ;
	}
	else if (nom == "Colin Maillard") {
		cout << "\033[40;38; 2; 145; 81; 25m CM \033[0m " ;
	}
	else if (nom == "Combat de boue") {
		cout << "\033[40;38; 2; 145; 81; 25m CB \033[0m " ;
	}
	else if (nom == "Chasseur de têtes") {
		cout << "\033[40;38; 2; 234; 34; 103m CT \033[0m " ;
	}
	else if (nom == "Stratege") {
		cout << "\033[40;38; 2; 234; 34; 103m S \033[0m " ;
	}
	else if (nom == "Banshee") {
		cout << "\033[40;38; 2; 234; 34; 103m B \033[0m " << endl;
	}
	else if (nom == "Traitre") {
		cout << "\033[40;38; 2; 234; 34; 103m T \033[0m " << endl;
	}
}

void VueJeu::afficheCarte(Carte* carte) {
	// On regarde de quel type est la carte
	if (CarteClan* carteClan = dynamic_cast<CarteClan*>(carte)) {
		afficheCarteClan((CarteClan*)(carteClan));
	}
	else if (CarteTactique* carteTactique = dynamic_cast<CarteTactique*>(carte)){
		afficheCarteTactique((CarteTactique*)(carteTactique));
	}
}

void VueJeu::afficheBornes()
{
	for (unsigned int i = 1; i < 10; i++) {
		cout << " \033[47;30m B"<<i<<" \033[0m";
	}
}

void VueJeu::afficheMain(Joueur& joueur)
{
	vector<Carte*> main = joueur.getMainJoueur();
	cout << "Ta main:" << endl;
	for (auto iter = main.begin(); iter < main.end(); iter++) {
		afficheCarte(*iter);
	}
}

