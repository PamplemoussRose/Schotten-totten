#include "VueJeu.h"

void VueJeu::afficheCarteClan(CarteClan* carte)
{
	string cl = carte->getCouleur();
	int v = carte->getValeur();
	if (cl=="rouge") {
		std::cout <<" \e[41mv\e[0m";
	}
	else if(cl == "vert") {
		std::cout << " \e[42mv\e[0m" ;
	}
	else if (cl == "jaune") {
		std::cout << " \e[43m v \e[0m" ;
	}
	else if (cl == "violet") {
		std::cout << " \e[45m v \e[0m";
	}
	else if (cl == "bleu") {
		std::cout << " \e[46m v \e[0m" ;
	}
	else if (cl == "marron") {
		std::cout << " \e[94; 53; 17; 0; 255m v \e[0m";
	}	
}



void VueJeu::afficheCarteTactique(CarteTactique* carte)
{
	string nom = carte->getNom();
	if (nom=="Joker") {
		std::cout << " \e[40;37m J \e[0m";
	}
	else if (nom == "PorteBouclier") {
		cout << "\e[m 123 \e[0m " ;
	}
	else if (nom == "Espion") {
		cout << "\e[40;37m 7 \e[0m " ;
	}
	else if (nom == "Colin Maillard") {
		cout << "\e[40;38; 2; 145; 81; 25m CM \e[0m " ;
	}
	else if (nom == "Combat de boue") {
		cout << "\e[40;38; 2; 145; 81; 25m CB \e[0m " ;
	}
	else if (nom == "Chasseur de têtes") {
		cout << "\e[40;38; 2; 234; 34; 103m CT \e[0m " ;
	}
	else if (nom == "Stratege") {
		cout << "\e[40;38; 2; 234; 34; 103m S \e[0m " ;
	}
	else if (nom == "Banshee") {
		cout << "\e[40;38; 2; 234; 34; 103m B \e[0m " << endl;
	}
	else if (nom == "Traitre") {
		cout << "\e[40;38; 2; 234; 34; 103m T \e[0m " << endl;
	}
}
void VueJeu::afficheCarte(Carte* carte) {
	if (typeid(carte) == typeid(CarteClan)) {
		afficheCarteClan((CarteClan*)(carte));
	}
	else {
		afficheCarteTactique((CarteTactique*)(carte));
	}
}

void VueJeu::afficheBornes()
{
	for (unsigned int i = 1; i < 10; i++) {
		cout << " \e[47;30m B"<<i<< "\e[0m";
	}
}



void VueJeu::afficheMain(Joueur& joueur)
{
	vector<Carte*> main = joueur.getMainJoueur();
	cout << "Ta main:" << endl;
	for (auto iter = main.begin(); iter < main.end(); iter++) {
		if (typeid(**iter) == typeid(CarteClan)) {
			afficheCarteClan((CarteClan*)(*iter));
		}
		else {
			afficheCarteTactique((CarteTactique*)(*iter));
		}
		cout << " - ";
	}
}

void VueJeu::afficheCarteJouee(Carte* carte)
{
	cout << "Carte jouée" << endl;
	afficheCarte(carte);
}

void VueJeu::affichecartePiochee(Carte* carte)
{
	cout << "Carte piochée:" << endl;
	afficheCarte(carte);
}

void VueJeu::afficheGagnant(Joueur* joueur)
{
	/*
	if (joueur==)
		cout << "Le gagnant est le joueur 1"<< endl;
	else{
		cout << "Le gagnant est le joueur 2"<< endl;
	}
	*/
}
