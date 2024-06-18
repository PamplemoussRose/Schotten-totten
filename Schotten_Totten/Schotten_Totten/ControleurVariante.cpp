#include "ControleurVariante.h"
#include "VueVariante.h"
#include "Vue.h"

// Definition des attributs de classe
ControleurVariante* ControleurVariante::instance = nullptr;

// Constructeur et destructeur
ControleurVariante::ControleurVariante() : Controleur((new VueVariante())) { getVue()->setControleur(this); }
ControleurVariante::~ControleurVariante() {
	instance = nullptr;
};

ControleurVariante* ControleurVariante::getControleurVariante()
{
	if (instance==nullptr) {
		instance = new ControleurVariante();
	}
	return instance;
};

// Méthode
void ControleurVariante::choisirVariante(unsigned int choix)
{
	// Gestion de l'erreur
	if (choix == 0 || choix > 2) {
		throw exception();
	}

	// Stock du choix
	ChoixUtilisateur* stockageChoix = ChoixUtilisateur::getChoixUtilisateur(); 
	stockageChoix->setChoixVariante(choix);

	// Changement de controleur vers les paramètres de joueurs
	Application * app = Application::getApplication(); 
	app->changeControleurParametre();
}
