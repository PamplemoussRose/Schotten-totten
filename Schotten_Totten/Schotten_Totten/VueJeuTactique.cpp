#include "VueJeuTactique.h"
#include "ControleurJeuTactique.h"
void VueJeuTactique::afficheTour(Joueur& joueurActuel)
{
	unsigned int indiceCarte;
	unsigned int numBorne;
	cout << "Quelle carte voulez vous jouer? (1-7)" << endl;// toujours 7 cartes en main
	afficheMain(joueurActuel);
	cin >> indiceCarte;
	Carte* carteChoisie;// = DemandeCarte::indiceCarte-1 --> carte clan ou tactique
	Plateau* plateau = controleurT->getEtatJeu()->getPlateau();
	if (typeid(carteChoisie) == typeid(CarteClan)) {	//si carte clan choisie
		cout << "Sur quel borne? (num�ro::1-9)" << endl;
		cin >> numBorne;
		vector<Borne*> bornes = plateau->getBornes();
		//controleurT->jouerCarteSurBorne(static_cast<CarteClan>(*carteChoisie), *bornes[numBorne - 1]);
		controleurT->revendiqueBorne(numBorne); //revendication de la borne ou pas si possible
	}
	else {
		cout << "CARTES TACTIQUES A FAIRE" << endl;
	}
	int choixPioche;
	cout << "Voulez vous piochez unne carte clan(1) ou une carte tactique(2)"<<endl;
	cin >> choixPioche;
	Carte* cartePioch�e;
	if (choixPioche == 1) {
		cartePioch�e = controleurT->getControPiocheClan()->piocher(*plateau->getPiocheClan(), joueurActuel); //le joueur pioche
	}
	else if (choixPioche == 2) {
		cartePioch�e = controleurT->getControPiocheTact()->piocher(*plateau->getPiocheTactique(), joueurActuel);
	}
	else {
		cout << "error" << endl;
	}
	cout << "Vous avez pioch�";
	afficheCarte(cartePioch�e);
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur
}
