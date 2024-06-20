#ifndef CONTROLEURPARAMETRE_HEADER
#define CONTROLEURPARAMETRE_HEADER
#include <vector>
#include "Controleur.h"
#include "Application.h"
#include "ChoixUtilisateur.h"
using namespace std;

class Vue;
class VueParametre;

class ControleurParametre : public Controleur
{
private:
	static ControleurParametre* instance;
	/*!
	* \lie la vueParametre à  ce controleur
	*/
	inline ControleurParametre();
public:
	/**
	 * Singletons should not be cloneable.
	 */
	ControleurParametre(ControleurParametre& other) = delete;
	/**
	 * Singletons should not be assignable.
	 */
	void operator=(const ControleurParametre&) = delete;
	/**
	* Destruction de l'instance
	*/
	~ControleurParametre();

	static ControleurParametre* getControleurParametre();
	/*!
	* retourne la vue Parametre
	*/
	VueParametre* getVue() { return (VueParametre*) Controleur::getVue(); }

	/**
	* Test et stock du choix des paramètres par l'utilisateur et demande à l'app de changer le controleur actuel
	* Entrée : le choix fait par l'utilisateur
	* Exception si le choix n'est pas dans les critères (ie pas 1 ou 2)
	*/
	void definirParametresJeu(unsigned int mode);
	
};
#endif