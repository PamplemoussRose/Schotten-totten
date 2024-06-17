#ifndef GUARD_CONTROLEUR
#define GUARD_CONTROLEUR
#include "Vue.h"
#include"EtatJeu.h"
class Vue;

//Classe abstraite
class Controleur {
private:
	//Attributs
	Vue* vue;
	EtatJeu* etatJeu;
	
public:
	//Methodes
	/*!
	* \Constructeur du controleur
	*/
	Controleur(Vue* pVue,EtatJeu* etatjeu) {
		vue = pVue;
		etatJeu = etatjeu;

	}

	/*!
	* \retourne etatJeu
	*/
	EtatJeu* getEtatJeu() { return etatJeu; };
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
