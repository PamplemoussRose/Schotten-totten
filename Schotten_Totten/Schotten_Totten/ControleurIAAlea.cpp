#include "ControleurIAAlea.h"

#include "Application.h"

void ControleurIAAlea::jouerCarte(ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur){
	// Choix de la carte
	unsigned int nCarte = (rand() % joueur.getNbreCartes()) + 1; //prend un nombre aleatoire entre 1 et nbreCartes
	Carte* carteRecuperee = joueur.getCarteMainPosition(nCarte);

	// Choix pour l'effet
	ControleurJeu* controleurJeu = (ControleurJeu*) Application::getApplication()->getControleurActuel();
	unsigned int joueurActuel = controleurJeu->getEtatJeu()->getNumJoueurActuel();
	vector<vector<unsigned int>> lstChoixPossibles = carteRecuperee->choixEffet(joueurActuel); // Pas d'affichage : retourne les choix
	vector<unsigned int> lstValeursChoisies;
	for (vector<unsigned int>& lstValeursPossibles : lstChoixPossibles) {
		lstValeursChoisies.push_back(rand() % lstValeursPossibles.size() + 1); // choisie aléatoirement
	}

	// Action 
	try {
		carteRecuperee->effet(lstValeursChoisies);
	}
	catch (exception exc) {
		jouerCarte(controleurDemandeCarte, joueur, autreJoueur);
	}
		

}

void ControleurIAAlea::revendiqueBorne(int joueurAct, EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes)
{
	Plateau* plateau = etatJeu.getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	//Verifie pour chaque borne si ielle est revendicable
	for (int numBorne = 0; numBorne < 9; numBorne++) {
		if ((bornes[numBorne])->revendicable()) { //revendication
			//si joueur 1
			if (joueurAct == 1 && (controleurBornes[numBorne])->calculeRevendication(*bornes[numBorne]) == 1) {
				bornes[numBorne]->setStatut(1);
				cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if (joueurAct == 2 && (controleurBornes[numBorne])->calculeRevendication(*bornes[numBorne]) == 2) {
				bornes[numBorne]->setStatut(-1);
				cout << "Le joueur 2 revendique la borne" << endl;
			}
		}
	}
}

Carte* ControleurIAAlea::piocheT(ControleurPioche& controlPiocheClan, ControleurPioche& controlPiocheTact, Joueur& joueurActuel) {
	int choixPioche;
	if (controlPiocheClan.getPioche()->getNbCartesRestantes() != 0 && controlPiocheTact.getPioche()->getNbCartesRestantes() != 0) {
		choixPioche = (rand() % 2)+1;//nombre entre 1 et 2
	}
	else if (controlPiocheClan.getPioche()->getNbCartesRestantes() == 0) {
		choixPioche = (rand() % 1) *2;//nombre soit 0 soit 2
	}
	else {
		choixPioche = (rand() % 1);//nombre soit 0 soit 1
	}
	cin >> choixPioche;
	if (choixPioche == 1) {
		Carte* cartePiochee = controlPiocheClan.piocher(joueurActuel); //le joueur pioche une carte clan
		return cartePiochee;
	}
	else if (choixPioche == 2) {
		Carte* cartePiochee = controlPiocheTact.piocher(joueurActuel); //le joueur pioche unne carte tactique
		return cartePiochee;
	}
	else {
		cout <<" tour passé" << endl;
	}
}

