#include "VueJeuV1.h"
#include "ControleurJeuV1.h"

void VueJeuV1::afficheTour(Joueur& joueurActuel)
{
	affichePlateau();
	Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
	afficheMain(joueurActuel);
	if (controleurV1->getJoueurActuel() == 1) {
		controleurV1->getControPerso1()->jouerCarte(*getControleur()->getDemandeCarte(),joueurActuel, *controleurV1->getEtatJeu()->getJoueur2());
		controleurV1->getControPerso1()->revendiqueBorne(getControleur()->getJoueurActuel() ,*controleurV1->getEtatJeu(), controleurV1->getBornes());
		Carte* cartePiochee =controleurV1->getControPerso1()->pioche(*plateau->getPiocheClan(), *controleurV1->getControPioche(),joueurActuel);
		afficheCarte(cartePiochee);
	}
	else {
		controleurV1->getControPerso2()->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurV1->getEtatJeu()->getJoueur1());
		controleurV1->getControPerso2()->revendiqueBorne(getControleur()->getJoueurActuel() ,*controleurV1->getEtatJeu(), controleurV1->getBornes());
		Carte* cartePiochee = controleurV1->getControPerso2()->pioche(*plateau->getPiocheClan(), *controleurV1->getControPioche(), joueurActuel);
		afficheCarte(cartePiochee);
	}
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur
	}
