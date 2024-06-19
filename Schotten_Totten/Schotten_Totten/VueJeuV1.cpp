#include"VueJeuV1.h"
#include "ControleurJeuV1.h"

void VueJeuV1::afficheTour(Joueur& joueurActuel)
{

	affichePlateau();
	unsigned int indiceCarte;
	unsigned int numBorne;
	cout << "Quelle carte voulez vous jouer? (1-6)" << endl;
	afficheMain(joueurActuel);
	cin >> indiceCarte;
	CarteClan* carteChoisie;// = DemandeCarte::indiceCarte-1
	cout << "Sur quel borne? (num�ro::1-9)" << endl;
	cin >> numBorne;
	Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	controleurV1->jouerCarteSurBorne(*carteChoisie,*bornes[numBorne-1]); 
	controleurV1->revendiqueBorne(numBorne); //revendication de la borne ou pas
	Carte* cartePiochee = controleurV1->getControPioche()->piocher(*plateau->getPiocheClan(),joueurActuel); //le joueur pioche
	cout << "Vous avez pioche";
	afficheCarte(cartePiochee);
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur

}
