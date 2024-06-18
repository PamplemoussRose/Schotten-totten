#ifndef GUARD_APPLICATION
#define GUARD_APPLICATION
#include "Controleur.h"
#include "ControleurVariante.h"
#include "ControleurParametre.h"
#include "ControleurJeu.h"

class Application {
private:
	static Application* instance;

	Controleur* controleurActuel;

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

	/**
	* Commencer l'affichage de la vue actuel
	*/
	void commencerVueActuel();

	/**
	* Change le controleur actuel en Controleur variante et lance l'affichage
	*/
	void changeControleurVariante();
	/**
	* Change le controleur actuel en Controleur parametre et lance l'affichage
	*/
	void changeControleurParametre();
	/**
	* Change le controleur actuel en Controleur jeu et lance l'affichage
	*/
	void changeControleurJeu();
};
#endif // !GUARD_APPLICATION
