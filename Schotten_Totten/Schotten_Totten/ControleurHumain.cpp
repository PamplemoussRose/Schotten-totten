#include "ControleurHumain.h"

void ControleurHumain::jouerCarte( ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur)
{
	Carte* carte = controleurDemandeCarte.choixCarte(joueur,autreJoueur);
	vector<unsigned int> lstChoix = controleurDemandeCarte.choixApplicationCarte(*carte);
	carte->effet(lstChoix);
}

void ControleurHumain::revendiqueBorne(EtatJeu& etatJeu, vector<ControleurBorne*> controleurBornes)
{
	unsigned int numBorne;
	cout << "Sur quel borne? (numero::1-9)" << endl;
	cin >> numBorne;
	Plateau* plateau = etatJeu.getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	if ((bornes[numBorne - 1])->revendicable()) {
		string rep;
		cout << " Revendiquer(1) ou piocher(2) ? " << endl;
		cin >> rep;
		if (rep == "1") {
			//si joueur 1
			if ((controleurBornes[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 1) {
				bornes[numBorne - 1]->setStatut(1);
				cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if ((controleurBornes[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 2) {
				bornes[numBorne - 1]->setStatut(-1);
				cout << "Le joueur 2 revendique la borne" << endl;
			}
		}

	}
}
