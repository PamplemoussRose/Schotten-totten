#include "ControleurIAAlea.h"


void ControleurIAAlea::jouerCarte(ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur){

		//gerer exception si les deux bornes selectionnes sont les memes
		//voir aussi le fait que les ia ne peuvent pas jouer trop de cartes tactiques

		unsigned int nCarte = (rand() % joueur.getNbreCartes()) + 1; //prend un nombre aleatoire entre 1 et nbreCartes
		Carte* carteRecuperee = joueur.getCarteMainPosition(nCarte);

		vector<vector<unsigned int>> lstChoix = carteRecuperee->choixEffet(1); // Pas d'affichage : retourne les choix
		for (auto iter = lstChoix.begin(); iter != lstChoix.end(); iter++) {
			iter;
		}

		vector<int> v1;
		for (int j = 0; j < 9; j++) {
			v1.push_back(rand() % lstChoix.size() + 1);//choisi
		}
		//lstChoix.push_back(v1);
		//carteRecuperee->effet(lstChoix);

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

Carte* ControleurIAAlea::piocheT(Pioche& pioche, ControleurPioche& controlPioche, Joueur& joueurActuel)
{
	return nullptr;
}

