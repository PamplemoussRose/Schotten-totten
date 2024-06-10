#ifndef GUARD_CONTROLEUR
#define GUARD_CONTROLEUR
#include "Vue.h"

//Classe abstraite
class Controleur {
protected:
	Vue* vue;

	virtual void afficheVue() = 0;
	
public:
	Controleur(Vue& pVue) {
		vue = &pVue;
	}

	virtual void afficheVue() {
		vue->affiche();
	};
};

#endif // !GUARD_CONTROLEUR
