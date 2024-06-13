#include "ControleurParametre.h"
#include "Vue.h"
#include "VueParametre.h"

ControleurParametre::ControleurParametre(VueParametre* vue) : Controleur((Vue*)vue) { vue->setControleur(this); };

void ControleurParametre::definirParametresJeu(int mode)
{
	if (mode != 1 && mode != 2 && mode != 3) {
		getVue()->erreurChoix();
	}
	else {
		//Appelle Application
	}

}
