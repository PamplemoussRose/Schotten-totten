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
		delete controleurActuel;
	}
	controleurActuel = ControleurVariante::getControleurVariante();
}

void Application::changeControleurParametre() {
	if (controleurActuel) {
		delete controleurActuel;
	}
	//controleurActuel = ControleurParametre::getControleurParametre();
}

void Application::changeControleurJeu() {

}