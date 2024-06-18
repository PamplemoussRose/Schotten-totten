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
		// Cette solution pose pb : On est obligé de passer de Variante -> Paramètre -> Jeu -> Variante
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

	// Construction du 
	ChoixUtilisateur* stockageChoix = ChoixUtilisateur::getChoixUtilisateur();
	if (stockageChoix->estPartieClassique()) {
		controleurActuel = ControleurJeuV1::getInstance();
	}
	else if (stockageChoix->estPartieTactique()) {
		// Ajout de l'instance de ControleurJeuTactique
	}
}