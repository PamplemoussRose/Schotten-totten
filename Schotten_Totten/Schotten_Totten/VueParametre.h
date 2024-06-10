#ifndef GUARD_VUE_VARIANTE
#define GUARD_VUE_VARIANTE
#include "Vue.h"
#include "ControleurParametre.h"

class VueParametre : public Vue
{
public:
	/*!
	* \demande à l'utilisateur de choisir avec qui il veut jouer
	*/
	int choixIAHumain();
	/*!
	* \met le controleur Parametre en ant que controleur
	*/
	void setControleur(ControleurParametre* pControleur) { Vue::setControleur(pControleur); };
	/*!
	* \renvoie le controleur parametre
	*/
	ControleurParametre* getControleur() { return (ControleurParametre*)Vue::getControleur(); }
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