#include "ControleurHumain.h"

void ControleurHumain::jouerCarte(Carte& carte, ControleurDemandeCarte& controleurDemandeCarte, Joueur& joueur, Joueur& autreJoueur)
{
	vector<unsigned int> lstChoix = controleurDemandeCarte.choixApplicationCarte(carte);
	carte.effet(lstChoix);
}
