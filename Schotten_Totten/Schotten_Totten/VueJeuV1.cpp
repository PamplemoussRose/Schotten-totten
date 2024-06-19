#include "VueJeuV1.h"
#include "ControleurJeuV1.h"

void VueJeuV1::afficheTour(Joueur& joueurActuel)
{
	affichePlateau();
	unsigned int indiceCarte;
	unsigned int numBorne;
	afficheMain(joueurActuel);
	if (controleurV1->getJoueurActuel() == 1) {
		//controleurV1->getControPerso1()->jouerCarte();
	}
	else {
		//controleurV1->getControPerso2()->jouerCarte();
	}

	cout << "Quelle carte voulez vous jouer? (1-6)" << endl;
	cin >> indiceCarte;
	CarteClan* carteChoisie ;// = DemandeCarte::indiceCarte-1
	cout << "Sur quel borne? (numero::1-9)" << endl;
	cin >> numBorne;
	Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	controleurV1->jouerCarteSurBorne(*carteChoisie,*bornes[numBorne-1]); 
	controleurV1->revendiqueBorne(numBorne); //revendication de la borne ou pas
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
