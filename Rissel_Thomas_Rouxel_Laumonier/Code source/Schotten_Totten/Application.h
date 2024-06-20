#ifndef GUARD_APPLICATION
#define GUARD_APPLICATION
#include "Controleur.h"
#include "ControleurVariante.h"
#include "ControleurParametre.h"
#include "ControleurJeuV1.h"
#include "BuilderClassique.h"

class Application {
private:
	static Application* instance;

	Controleur* controleurActuel;

	BuilderClassique* builderClassique;

	Application();

public:
	/**
	 * Singletons should not be cloneable.
	 */
	Application(Application& other) = delete;
	/**
	 * Singletons should not be assignable.
	 */
	void operator=(const Application&) = delete;

	static Application* getApplication();

	Controleur* getControleurActuel() {
		return controleurActuel;
	}

	/**
	* Commencer l'affichage de la vue actuel
	*/
	void commencerVueActuel();

	/**
	* Change le controleur actuel en Controleur variante
	*/
	void changeControleurVariante();
	/**
	* Change le controleur actuel en Controleur parametre
	*/
	void changeControleurParametre();
	/**
	* Change le controleur actuel en Controleur jeu
	*/
	void changeControleurJeu();
};
#endif // !GUARD_APPLICATION
