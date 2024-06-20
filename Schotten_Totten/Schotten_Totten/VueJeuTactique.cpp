#include "VueJeuTactique.h"
#include "ControleurJeuTactique.h"
void VueJeuTactique::afficheTour(Joueur& joueurActuel)
{
	/*	affichePlateau();
	Plateau* plateau = controleurT->getEtatJeu()->getPlateau();
	afficheMain(joueurActuel);
	if (controleurT->getJoueurActuel() == 1) {
		controleurT->getControPerso1()->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurT->getEtatJeu()->getJoueur2());
		controleurT->getControPerso1()->revendiqueBorne(getControleur()->getJoueurActuel(), *controleurT->getEtatJeu(), controleurT->getBornes());
		Carte* cartePiochee = controleurT->getControPerso1()->piocheT(*plateau->getPiocheClan(), *controleurT->getControPioche(), joueurActuel);
		afficheCarte(cartePiochee);
	}
	else {
		controleurT->getControPerso2()->jouerCarte(*getControleur()->getDemandeCarte(), joueurActuel, *controleurT->getEtatJeu()->getJoueur1());
		controleurT->getControPerso2()->revendiqueBorne(getControleur()->getJoueurActuel(), *controleurT->getEtatJeu(), controleurT->getBornes());

		Carte* cartePiochee = controleurT->getControPerso2()->piocheT(*plateau->getPiocheClan(), *controleurT->getControPioche(), joueurActuel);
		afficheCarte(cartePiochee);
	}
	*/
////////////////////////////////////////:
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
		Carte* cartePiochee;
		if (choixPioche == 1) {
			cartePiochee = controleurT->getControPiocheClan()->piocher(*plateau->getPiocheClan(), joueurActuel); //le joueur pioche
		}
		else if (choixPioche == 2) {
			cartePiochee = controleurT->getControPiocheTact()->piocher(*plateau->getPiocheTactique(), joueurActuel);
		}
		else {
			cout << "error" << endl;
		}
		cout << "Vous avez pioché";
		afficheCarte(cartePiochee);
	}
	else if (plateau->getPiocheClan()->getNbCartesRestantes() == 0) {
		cout << "Voulez vous piochez une carte tactique(1) ou passez(2)?" << endl;
		cin >> choixPioche;
		Carte* cartePiochee;
		if (choixPioche == 1) {
			cartePiochee = controleurT->getControPiocheTact()->piocher(*plateau->getPiocheTactique(), joueurActuel); //le joueur pioche carte tactique
			cout << "Vous avez pioché";
			afficheCarte(cartePiochee);
		}
	}
	
	
	cout << "Fin de votre tour" << endl;//avec appli ou etatjeu changement de joueur
}
