#include "ControleurHumain.h"

void ControleurHumain::jouerCarte(Carte& carte, ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur)
{
	unsigned int nCarte = controleurDemandeCarte.choixCarte(joueur, autreJoueur);
	vector<unsigned int> lstChoix = controleurDemandeCarte.choixApplicationCarte(carte);
	carte.effet(lstChoix);
}
