#include "ControleurJeu.h"
#include "VueJeu.h"

ControleurJeu::ControleurJeu() : Controleur((Vue*)(new VueJeu()))
{
	getVue()->setControleur(this); 
	EtatJeu* etatJeu = EtatJeu::getInstance();
}

VueJeu* ControleurJeu::getVue()
{
	return (VueJeu*)Controleur::getVue();
}
