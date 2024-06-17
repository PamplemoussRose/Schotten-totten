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
	* Permet le stock de la variante choisie par l'utilisateur afin d'être utiliser
	* lors de la création de EtatJeu dans ControleurJeu::initPartie
	*/
	static unsigned int choixVariante;

	inline ControleurVariante();
	//inline ControleurVariante(VueVariante* vue);

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
	//~ControleurVariante() : Controleur::~Controleur() { delete instance; };

	static ControleurVariante* getControleurVariante();

	VueVariante* getVue() { return (VueVariante*) Controleur::getVue(); }

	void choisirVariante(unsigned int choix);
};
#endif