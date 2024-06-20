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
	* \brief demande à l'utilisateur de choisir avec qui il veut jouer
	*/
	void choixIAHumain();
	/*!
	* \brief met le controleur Parametre en ant que controleur
	*/
	void setControleur(ControleurParametre* pControleur) { controleur = pControleur; };
	/*!
	* \brief renvoie le controleur parametre
	*/
	ControleurParametre* getControleur() { return controleur; }
	/*!
	* \brief gere l'erreur de saisie de choixIAHumain
	*/
	void erreurChoix();
	/*!
	* \brief surcharge de affiche dans vue appelle choixIAHumain
	*/
	void affiche() override;
};

#endif