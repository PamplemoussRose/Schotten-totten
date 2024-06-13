#include "VueJeu.h"
void VueJeu::affiche()
{
	cout << "DEBUT DU JEU" << endl;
	bool partie = true;
	while(partie){
		//je vois deja pour le tour d'un joueur
	}
}

void VueJeu::afficheTour(Joueur& joueurActuel)
{
	Carte* carteChoisie;
	unsigned int indiceCarte;
	unsigned int numBorne;
	cout << "Quelle carte voulez vous jouer? (1-6)"<<endl;
	afficheMain(joueurActuel);
	cout << "Sur quel borne? (numéro::1-9)" << endl;
	cin >> numBorne;
	//JouerCarteSurBorne;
	/*
	if (bornes[numBorne - 1].revendiquable()) {
		string rep;
		cout <<" Voulez vous revendiquer cette borne ? (y/n)"<<endl;
		cin >> rep;
		if (rep == "y") {
			//si joueur 1
			if (calculeRevendication(bornes[numBorne - 1]) == 1) {
				bornes[numBorne - 1].setStatut("Revendiquée:1");
				cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if (calculeRevendication(bornes[numBorne - 1]) == 2) {
				bornes[numBorne - 1].setStatut("Revendiquée:2");
				cout << "Le joueur 2 revendique la borne" << endl;
			}
			else {
				cout << "Dommage! L'autre joueur revendique la borne" << endl;
			}
		}
	}
	*/
	//controleurjeu piocher joueur qui regourne la carte piochée
	cout << "Vous avez pioché" <<"cartepiochée"<< endl;
	cout << "Changement de joueur!Au tour du joueur" << endl;

}

void VueJeu::afficheCarteClan(CarteClan* carte)
{
	Couleurs cl = carte->getCouleur();
	int v = carte->getValeur();
	if (cl==Couleurs::rouge) {
		std::cout <<" \e[41m "<<v<<" \e[0m";
	}
	else if(cl == Couleurs::vert) {
		std::cout << " \e[42m "<<v<<" \e[0m" ;
	}
	else if (cl == Couleurs::jaune) {
		std::cout << " \e[43m " << v << " \e[0m" ;
	}
	else if (cl == Couleurs::violet) {
		std::cout << " \e[45m " << v << " \e[0m";
	}
	else if (cl == Couleurs::bleu) {
		std::cout << " \e[46m " << v << " \e[0m" ;
	}
	else if (cl == Couleurs::marron) {
		std::cout << " \e[94; 53; 17; 0; 255m "<< v<<" \e[0m";
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
		afficheCarte(*iter);
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
