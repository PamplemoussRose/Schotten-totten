#include "EtatJeu.h"

EtatJeu* EtatJeu::getInstance()
{
	if (instance == nullptr) {
		instance = new EtatJeu();
		//instance = make_unique<EtatJeu()>;
	}
	return instance;
}

EtatJeu::EtatJeu() {
	plateau = NULL;
	joueur1 = NULL;
	joueur2 = NULL;
}
