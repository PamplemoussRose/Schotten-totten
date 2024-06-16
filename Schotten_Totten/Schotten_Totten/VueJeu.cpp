#include "VueJeu.h"
void VueJeu::affiche()
{
	cout << "DEBUT DU JEU" << endl;
	bool partie = true;
	while(partie){
		//je vois deja pour le tour d'un joueur
	}
}

void VueJeu::affichePlateau()
{
	/*
	vector<Borne*> bornes = (*controleur).getEtatJeu().getPlateau().getBornes();
	int maxJ1 = (*controleur).getEtatJeu().getMaxCartesJ1();
	for (int b = 0; b < 9; b++) {
		vector<Carte> cartesJ1 = bornes[b].getCartesJ1();
		for (int c = 0; c < cartesJ1.size(); c++) {
			afficheCarte(cartesJ1[c]);//commetn avoir la liste de carte sur cette borne
		}
	}
	cout << endl;
	cout << endl;
	afficheBornes();
	cout << endl;
	cout << endl;
	*/
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
	if (controleur->getBornes()[numBorne - 1]->revendiquable()) {
		string rep;
		cout <<" Revendiquer(1) ou piocher(2) ? "<<endl;
		cin >> rep;
		if (rep == "1") {
			//si joueur 1
			if (controleur->getBornes()[numBorne - 1]).calculeRevendication() == 1) {
			controleur.getBornes()[numBorne - 1].setStatut("Revendiquée:1");
			cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if (controleur->getBornes()[numBorne - 1]).calculeRevendication() == 2) {
			controleur.getBornes()[numBorne - 1].setStatut("Revendiquée:2");
			cout << "Le joueur 2 revendique la borne" << endl;
			}
		}
		
	}*/
	//controleurjeu piocher joueur qui regarde la carte piochée
	cout << "Vous avez pioché" <<"cartepiochée"<< endl;
	cout << "Changement de joueur!Au tour du joueur" << endl;

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
		std::cout << " \033[46m" << v << " \033[0m";
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
