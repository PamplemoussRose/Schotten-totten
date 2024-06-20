#include "ControleurJeu.h"
#include "VueJeu.h"

// Construction (Attention pas de destructeur - à faire) ++++++++++++++++++++++++++++++++

/*
VueJeu* ControleurJeu::getVue()
{
	return (VueJeu*)Controleur::getVue();
}*/

ControleurJeu::ControleurJeu(VueJeu* vue):Controleur(vue) {
	getVue()->setControleur(this);
}

