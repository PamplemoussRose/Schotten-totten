#include "VueJeuTactique.h"
#include "ControleurJeuTactique.h"
void VueJeuTactique::afficheTour(Joueur& joueurActuel)
{
	affichePlateau();
	Plateau* plateau = controleurT->getEtatJeu()->getPlateau();
	afficheMain(joueurActuel);
	if (controleurT->getEtatJeu()->getNumJoueurActuel() == 1) {
		ControleurPersonnage* j1 =controleurT->getControPerso1();
		unsigned int numBorne=j1->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurT->getEtatJeu()->getJoueur2())[0];
		Borne* borneJouee = plateau->getBornes()[numBorne - 1];
		if (borneJouee->revendicable()) {
			j1->revendiqueBorne(*borneJouee, getControleur()->getEtatJeu()->getNumJoueurActuel(), *controleurT->getEtatJeu(), controleurT->getBornes());
		}
		Carte* cartePiochee = j1->piocheT(*controleurT->getControPiocheClan(), *controleurT->getControPiocheTact(), joueurActuel);
		afficheCarte(cartePiochee);
	}
	else {
		ControleurPersonnage* j2 = controleurT->getControPerso2();
		unsigned int numBorne = j2->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurT->getEtatJeu()->getJoueur1())[0];
		Borne* borneJouee = plateau->getBornes()[numBorne - 1];
		if (borneJouee->revendicable()) {
			j2->revendiqueBorne(*borneJouee, getControleur()->getEtatJeu()->getNumJoueurActuel(), *controleurT->getEtatJeu(), controleurT->getBornes());
		}
		Carte* cartePiochee =  j2->piocheT(*controleurT->getControPiocheClan(), *controleurT->getControPiocheTact(), joueurActuel);
		afficheCarte(cartePiochee);
	}
}
