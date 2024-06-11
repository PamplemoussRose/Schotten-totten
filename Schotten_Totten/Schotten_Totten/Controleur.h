#ifndef GUARD_CONTROLEUR
#define GUARD_CONTROLEUR
#include "Vue.h"

class Vue;

//Classe abstraite
class Controleur {
protected:
	//Attributs
	Vue* vue;
	
public:
	//Methodes
	/*!
	* \lie la vue au controleur
	*/
	Controleur(Vue& pVue) {
		vue = &pVue;
	}
	/*!
	* \appelle la fonction affiche de vue
	*/
	virtual void afficheVue() {
		vue->affiche();
	};
	/*!
	* \retourne la vue
	*/
	Vue* getVue() { return vue; };
};

#endif // !GUARD_CONTROLEUR
