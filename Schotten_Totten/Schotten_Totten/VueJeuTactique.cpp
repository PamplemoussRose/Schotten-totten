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
		cout << "Sur quel borne? (numéro::1-9)" << endl;
		cin >> numBorne;
		vector<Borne*> bornes = plateau->getBornes();
		//controleurT->jouerCarteSurBorne(static_cast<CarteClan>(*carteChoisie), *bornes[numBorne - 1]);
		controleurT->revendiqueBorne(numBorne); //revendication de la borne ou pas si possible
	}
	else {
		cout << "CARTES TACTIQUES A FAIRE" << endl;
	}
	int choixPioche;
	//si les 2 pioches sont non vides
	if (plateau->getPiocheClan()->getNbCartesRestantes() != 0 && plateau->getPiocheTactique()->getNbCartesRestantes() != 0) {
		cout << "Voulez vous piochez une carte clan(1) ou une carte tactique(2)?" << endl;
		cin >> choixPioche;
		Carte* cartePiochée;
		if (choixPioche == 1) {
			cartePiochée = controleurT->getControPiocheClan()->piocher(*plateau->getPiocheClan(), joueurActuel); //le joueur pioche
		}
		else if (choixPioche == 2) {
			cartePiochée = controleurT->getControPiocheTact()->piocher(*plateau->getPiocheTactique(), joueurActuel);
		}
		else {
			cout << "error" << endl;
		}
		cout << "Vous avez pioché";
		afficheCarte(cartePiochée);
	}
	else if (plateau->getPiocheClan()->getNbCartesRestantes() == 0) {
		cout << "Voulez vous piochez une carte tactique(1) ou passez(2)?" << endl;
		cin >> choixPioche;
		Carte* cartePiochée;
		if (choixPioche == 1) {
			cartePiochée = controleurT->getControPiocheTact()->piocher(*plateau->getPiocheTactique(), joueurActuel); //le joueur pioche carte tactique
			cout << "Vous avez pioché";
			afficheCarte(cartePiochée);
		}
	}
	
	
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur
}
