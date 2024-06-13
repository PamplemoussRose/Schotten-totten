#ifndef GUARD_VUE_PARAMETRE
#define GUARD_VUE_PARAMETRE
#include "Vue.h"
#include "ControleurParametre.h"

class ControleurParametre;

class VueParametre : public Vue
{
private:
	ControleurParametre* controleur;
	
public:
	/*!
	* \demande à l'utilisateur de choisir avec qui il veut jouer
	*/
	void choixIAHumain();
	/*!
	* \met le controleur Parametre en ant que controleur
	*/
	void setControleur(ControleurParametre* pControleur) { controleur = pControleur; };
	/*!
	* \renvoie le controleur parametre
	*/
	ControleurParametre* getControleur() { return controleur; }
	/*!
	* \gere l'erreur de saisie de choixIAHumain
	*/
	void erreurChoix();
	/*!
	* \surcharge de affiche dans vue appelle choixIAHumain
	*/
	void affiche() override;
};

#endif