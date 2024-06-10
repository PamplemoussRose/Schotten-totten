#include "ControleurParametre.h"

void ControleurParametre::definirParametresJeu(int mode)
{
	if (mode != 1 && mode != 2 && mode != 3) {
		getVue()->erreurChoix();
	}
	else {
		//Appelle Application
	}

}
