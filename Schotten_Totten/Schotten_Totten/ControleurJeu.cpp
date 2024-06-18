#include "ControleurJeu.h"
#include "VueJeu.h"

// Construction (Attention pas de destructeur) ++++++++++++++++++++++++++++++++
ControleurJeu::ControleurJeu() : Controleur(new VueJeu())
{
	getVue()->setControleur(this); 
	EtatJeu* etatJeu = EtatJeu::getInstance();
}

VueJeu* ControleurJeu::getVue()
{
	return (VueJeu*)Controleur::getVue();
}
