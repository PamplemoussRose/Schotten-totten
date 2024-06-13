#ifndef CONTROLEURPARAMETRE_HEADER
#define CONTROLEURPARAMETRE_HEADER
#include <vector>
#include "Controleur.h"
using namespace std;

class Vue;
class VueParametre;

class ControleurParametre : public Controleur
{
public:
	/*!
	* \lie la vueParametre à  ce controleur
	*/
	inline ControleurParametre(VueParametre* vue);
	/*!
	* \retourne la vue Parametre
	*/
	VueParametre* getVue() { return (VueParametre*) Controleur::getVue(); }
	/*!
	* \definit les parametres de jeu
	*/
	void definirParametresJeu(int mode);
	
};
#endif