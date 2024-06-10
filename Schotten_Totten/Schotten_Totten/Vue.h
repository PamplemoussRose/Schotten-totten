#ifndef GUARD_VUE
#define GUARD_VUE
#include "Controleur.h"

class Vue
{
private:
	Controleur* controleur;

public:
	void setControleur(Controleur* pControleur) {
		controleur = pControleur
			;
	}

	virtual void affiche()=0;
};

#endif