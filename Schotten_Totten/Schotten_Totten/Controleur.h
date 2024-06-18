#ifndef GUARD_CONTROLEUR
#define GUARD_CONTROLEUR
#include "Vue.h"
class Vue;

//Classe abstraite
class Controleur {
private:
	//Attributs
	Vue* vue;
	
protected:
	//Methodes
	/*!
	* \Constructeur du controleur
	*/
	Controleur(Vue* pVue) {
		vue = pVue;
	}

	~Controleur() {
		delete vue;
	}

public:
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
