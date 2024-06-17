#ifndef GUARD_APPLICATION
#define GUARD_APPLICATION
#include "Controleur.h"
#include "ControleurVariante.h"
#include "ControleurParametre.h"
//#include "ControleurJeu.h"

class Application {
private:
	Application* instance = nullptr;

	Controleur controleurActuel;

	Application();

public:

	Application getApplication();

	void mainloop();

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
