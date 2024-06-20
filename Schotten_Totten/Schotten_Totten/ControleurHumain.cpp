#include "ControleurHumain.h"

vector<unsigned int> ControleurHumain::jouerCarte( ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur)
{
	vector<unsigned int> infoApresEffet; // Ex : sur quelle borne la carte est jouée
	Carte* carte = controleurDemandeCarte.choixCarte(joueur,autreJoueur);
	vector<unsigned int> lstChoix = controleurDemandeCarte.choixApplicationCarte(*carte);
	try {
		infoApresEffet = carte->effet(lstChoix);
	}
	catch (exception exc) {
		cout << "Ces choix ne sont pas possible : merci de choisir à nouveau"; // A mettre dans ControleurDemandeCarte
		jouerCarte(controleurDemandeCarte, joueur, autreJoueur);
	}
	return infoApresEffet;
}

void ControleurHumain::revendiqueBorne(Borne& borneJouee,int joueurAct,EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes)
{
	unsigned int numBorne= borneJouee.getNumero();
	//cout << "Revendiquer quelle borne? (numero:1-9)" << endl; //sur la borne jouée precedemment si possible
	//cin >> numBorne;
	Plateau* plateau = etatJeu.getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	if (borneJouee.revendicable()) {
		string rep;
		cout << " Revendiquer(1) ou piocher(2) ? " << endl;
		cin >> rep;
		if (rep == "1") {
			//si joueur 1
			if (joueurAct==1 &&(controleurBornes[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 1) {
				bornes[numBorne - 1]->setStatut(1);
				cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if (joueurAct == 2 && (controleurBornes[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 2) {
				bornes[numBorne - 1]->setStatut(-1);
				cout << "Le joueur 2 revendique la borne" << endl;
			}
		}

	}
}


Carte* ControleurHumain::piocheT(ControleurPioche& controlPiocheClan, ControleurPioche& controlPiocheTact, Joueur& joueurActuel)
{
	int choixPioche;
	if (controlPiocheClan.getPioche()->getNbCartesRestantes() != 0 && controlPiocheTact.getPioche()->getNbCartesRestantes() != 0) {
		cout << "Voulez vous piochez une carte clan(1) ou une carte tactique(2)?"<<endl;
	}
	else if (controlPiocheClan.getPioche()->getNbCartesRestantes() == 0) {
		cout << "Voulez vous piochez une carte tactique(2) ou passez(0)?"<<endl;
	}
	else {
		cout << "Voulez vous piochez une carte clan(1) ou passez(0)?"<<endl;
	}
	cin >> choixPioche;
	if (choixPioche == 1) {
		Carte* cartePiochee = controlPiocheClan.piocher(joueurActuel); //le joueur pioche
		cout << "Vous avez pioché une carte clan:"<<endl;
		return cartePiochee;
	}
	else if (choixPioche == 2) {
		Carte* cartePiochee = controlPiocheTact.piocher(joueurActuel); //le joueur pioche
		cout << "Vous avez pioché une carte tactique:"<<endl;
		return cartePiochee;
	}
	else{
		cout << "Votre tour est passé" << endl;
	}
}
