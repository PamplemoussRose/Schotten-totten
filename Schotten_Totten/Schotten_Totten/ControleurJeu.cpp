#include "ControleurJeu.h"
#include "VueJeu.h"

// Construction (Attention pas de destructeur) ++++++++++++++++++++++++++++++++

/*
VueJeu* ControleurJeu::getVue()
{
	return (VueJeu*)Controleur::getVue();
}*/

ControleurJeu::ControleurJeu(VueJeu* vue)
	:Controleur((Vue*)vue) {
	initPartie();
	getVue()->setControleur(this);
	EtatJeu* etatJeu = EtatJeu::getInstance();
}

void ControleurJeu::revendiqueBorne(unsigned int numBorne)
{
	shared_ptr<Plateau> plateau = etatJeu->getPlateau();
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
