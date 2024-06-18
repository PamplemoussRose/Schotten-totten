#include "Application.h"

Application* Application::instance = nullptr;

Application::Application() {
	changeControleurVariante();
}

Application* Application::getApplication() {
	if (instance == nullptr) {
		instance = new Application();
	}
	return instance;
}

void Application::commencerVueActuel(){
	controleurActuel->afficheVue();
}

void Application::changeControleurVariante() {
	if (controleurActuel) {
		delete (ControleurParametre*) controleurActuel;
		// Cette solution pose pb : On est oblig� de passer de Variante -> Param�tre -> Jeu -> Variante
	}
	controleurActuel = ControleurVariante::getControleurVariante();
}

void Application::changeControleurParametre() {
	if (controleurActuel!= nullptr) {
		delete (ControleurVariante*) controleurActuel;
	}
	controleurActuel = ControleurParametre::getControleurParametre();
}

void Application::changeControleurJeu() {
	if (controleurActuel != nullptr) {
		delete (ControleurParametre*)controleurActuel;
	}
	// = ControleurJeu::getControleurJeu();
}