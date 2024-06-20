#include "ControleurJeu.h"
#include "VueJeu.h"

// Construction (Attention pas de destructeur) ++++++++++++++++++++++++++++++++

/*
VueJeu* ControleurJeu::getVue()
{
	return (VueJeu*)Controleur::getVue();
}*/

ControleurJeu::ControleurJeu(VueJeu* vue):Controleur(vue) {
	getVue()->setControleur(this);
}

