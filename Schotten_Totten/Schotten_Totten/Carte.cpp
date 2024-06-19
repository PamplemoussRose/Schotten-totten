#include "Carte.h"
#include "EtatJeu.h"

vector<vector<unsigned int>> Carte::choixEffet(unsigned int joueur) {
	unsigned int compteur = 0;
	vector<vector<unsigned int>> choix = vector<vector<unsigned int>>();
	if (joueur == 1) {
		for (Borne *borne : EtatJeu::getInstance()->getPlateau()->getBornes()) {
			if (borne->getCartesJ1().size() >= borne->getNbCartesRevendiquer())
				choix.begin()->push_back(compteur);
			compteur++;
		}
		return choix;
	}
	else if (joueur == 2) {
		for (Borne* borne : EtatJeu::getInstance()->getPlateau()->getBornes()) {
			if (borne->getCartesJ2().size() >= borne->getNbCartesRevendiquer())
				choix.begin()->push_back(compteur);
			compteur++;
		}
		return choix;
	}
	else {
		throw new exception("Joueur non valide");
	}
}

template<class ...Args>
inline void Carte::effet(Args ...args) {

}

void Carte::effet(vector<unsigned int> lstChoix) {

}