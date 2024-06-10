#ifndef CONTROLEURPARAMETRE_HEADER
#define CONTROLEURPARAMETRE_HEADER
#include <vector>
#include "Controleur.h"
#include "VueParametre.h"
#include "Application.h"
using namespace std;


class ControleurParametre : public Controleur
{
public:
	/*!
	* \lie la vueParametre à  ce controleur
	*/
	ControleurParametre(VueParametre& vue) : Controleur(vue) { vue.setControleur(this); };
	/*!
	* \retourne la vue Parametre
	*/
	VueParametre* getVue() { return (VueParametre*)getVue(); }
	/*!
	* \definit les parametres de jeu
	*/
	void definirParametresJeu(int mode);
	
};
#endif