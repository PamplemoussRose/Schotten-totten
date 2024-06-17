#include "ControleurVariante.h"
#include "VueVariante.h"
#include "Vue.h"

// Definition des attributs de classe
ControleurVariante* ControleurVariante::instance = nullptr;
unsigned int ControleurVariante::choixVariante = 0;

// Methode
ControleurVariante::ControleurVariante() : Controleur((new VueVariante())) { getVue()->setControleur(this); }

ControleurVariante* ControleurVariante::getControleurVariante()
{
	if (instance==nullptr) {
		instance = new ControleurVariante();
	}
	return instance;
};

void ControleurVariante::choisirVariante(unsigned int choix)
{
	// Gestion de l'erreur
	if (choix == 0 || choix > 2) {
		throw exception();
	}

	// Stock du choix + Changement de controleur vers les paramètres de joueurs
	choixVariante = choix;
	Application::getApplication()->changeControleurParametre();
}
