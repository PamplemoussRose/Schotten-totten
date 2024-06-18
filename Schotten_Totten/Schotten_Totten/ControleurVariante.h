#ifndef CONTROLEURVARIANTE_HEADER
#define CONTROLEURVARIANTE_HEADER
#include <string>
#include "Controleur.h"
#include "Application.h"
using namespace std;

class Vue;
class VueVariante;

class ControleurVariante : public Controleur
{
private:
	static ControleurVariante* instance;
	/**
	* Permet le stock de la variante choisie par l'utilisateur afin d'�tre utiliser
	* lors de la cr�ation de EtatJeu dans ControleurJeu::initPartie
	*/
	static unsigned int choixVariante;

	inline ControleurVariante();

public:
	/**
	 * Singletons should not be cloneable.
	 */
	ControleurVariante(ControleurVariante& other) = delete;
	/**
	 * Singletons should not be assignable.
	 */
	void operator=(const ControleurVariante&) = delete;
	/**
	* Destruction de l'instance
	*/
	~ControleurVariante();

	static ControleurVariante* getControleurVariante();

	VueVariante* getVue() { return (VueVariante*) Controleur::getVue(); }

	/**
	* Test et stock du choix de la variante par l'utilisateur et demande � l'app de changer le controleur actuel
	* Entr�e : le choix fait par l'utilisateur
	* Exception si le choix n'est pas dans les crit�res (ie pas 1 ou 2)
	*/
	void choisirVariante(unsigned int choix);
};
#endif