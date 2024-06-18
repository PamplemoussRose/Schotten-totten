#ifndef CONTROLEURVARIANTE_HEADER
#define CONTROLEURVARIANTE_HEADER
#include <string>
#include "Controleur.h"
#include "Application.h"
#include "ChoixUtilisateur.h"
using namespace std;

class Vue;
class VueVariante;

class ControleurVariante : public Controleur
{
private:
	static ControleurVariante* instance;

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
	* Test et stock du choix de la variante par l'utilisateur et demande à l'app de changer le controleur actuel
	* Entrée : le choix fait par l'utilisateur
	* Exception si le choix n'est pas dans les critères (ie pas 1 ou 2)
	*/
	void choisirVariante(unsigned int choix);
};
#endif