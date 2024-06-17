#ifndef GUARD_CONTROLEUR
#define GUARD_CONTROLEUR
#include "Vue.h"

//Classe abstraite
class Controleur {
private:
	//Attributs
	Vue* vue;
	
public:
	//Methodes
	/*!
	* \lie la vue au controleur
	*/
	Controleur(Vue* pVue) {
		vue = pVue;
	}

	/*!
	* \retourne la vue
	*/
	Vue* getVue() { return vue; };
	/*!
	* \appelle la fonction affiche de vue
	*/
	void afficheVue() {
		vue->affiche();
	};
};

#endif // !GUARD_CONTROLEUR
