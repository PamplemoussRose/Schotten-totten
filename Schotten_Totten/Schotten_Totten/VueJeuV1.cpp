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
	}
	else {
		controleurV1->getControPerso2()->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurV1->getEtatJeu()->getJoueur1());
		controleurV1->getControPerso2()->revendiqueBorne(getControleur()->getJoueurActuel() ,*controleurV1->getEtatJeu(), controleurV1->getBornes());
	}
	/*
	cout << "Quelle carte voulez vous jouer? (1-6)" << endl;
	cin >> indiceCarte;
	CarteClan* carteChoisie ;// = DemandeCarte::indiceCarte-1
	cout << "Sur quel borne? (numero::1-9)" << endl;
	cin >> numBorne;
	Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	controleurV1->jouerCarteSurBorne(*carteChoisie,*bornes[numBorne-1]); 

	controleurV1->revendiqueBorne(numBorne); //revendication de la borne ou pas*/
	if (plateau->getPiocheClan()->getNbCartesRestantes() != 0) {
		Carte* cartePiochee = controleurV1->getControPioche()->piocher(*plateau->getPiocheClan(), joueurActuel); //le joueur pioche
		cout << "Vous avez pioche";
		afficheCarte(cartePiochee);
	}
	else {
		cout << "Pioche vide"<<endl;
	}
	
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur
	}
