#include "Application.h"

Application::Application() {

}

Application Application::getApplication() {
	if (instance == nullptr) {
		instance = new Application();
	}
	return *instance;
}

void Application::mainloop(){
	controleurActuel.afficheVue();
}

void Application::changeControleurVariante() {
	controleurActuel = 
}

void Application::changeControleurParametre() {

}

void Application::changeControleurJeu() {

}