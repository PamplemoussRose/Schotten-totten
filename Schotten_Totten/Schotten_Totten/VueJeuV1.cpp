#include "VueJeuV1.h"
#include "ControleurJeuV1.h"

void VueJeuV1::affiche()
{
	// Devrait �tre dans VueJeu
	Joueur* joueurActuel = controleurV1->getEtatJeu()->getJoueurActuel();
	afficheTour(*joueurActuel);
}

void VueJeuV1::afficheTour(Joueur& joueurActuel)
{
	affichePlateau();
	Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
	afficheMain(joueurActuel);
	if (controleurV1->getEtatJeu()->getNumJoueurActuel() == 1) {
		unsigned int numBorne = controleurV1->getControPerso1()->jouerCarte(*getControleur()->getDemandeCarte(),joueurActuel, *controleurV1->getEtatJeu()->getJoueur2())[0];
		Borne* borneJouee = plateau->getBornes()[numBorne - 1];
		affichePlateau();
		if (borneJouee->revendicable()) {
			controleurV1->getControPerso1()->revendiqueBorne(*borneJouee,getControleur()->getEtatJeu()->getNumJoueurActuel(), *controleurV1->getEtatJeu(), controleurV1->getBornes());
		}
		Carte* cartePiochee = controleurV1->getControPerso1()->piocheV1(*controleurV1->getControPioche(),joueurActuel);
		afficheCarte(cartePiochee);
	}
	else {
		unsigned int numBorne = controleurV1->getControPerso2()->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurV1->getEtatJeu()->getJoueur1())[0];
		Borne* borneJouee = plateau->getBornes()[numBorne - 1];
		if (borneJouee->revendicable()) {
			controleurV1->getControPerso2()->revendiqueBorne(*borneJouee, getControleur()->getEtatJeu()->getNumJoueurActuel(), *controleurV1->getEtatJeu(), controleurV1->getBornes());
		}
		Carte* cartePiochee = controleurV1->getControPerso2()->piocheV1(*controleurV1->getControPioche(), joueurActuel);
		afficheCarte(cartePiochee);
	}
	cout << "Fin de votre tour" << endl;
	}
