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
		delete (ControleurJeu*) controleurActuel;
	}
	controleurActuel = ControleurVariante::getControleurVariante();
}

void Application::changeControleurParametre() {
	if (controleurActuel!= nullptr) {
		delete (ControleurVariante*) controleurActuel;
	}
	controleurActuel = ControleurVariante::getControleurVariante();
}

void Application::changeControleurJeu() {

}