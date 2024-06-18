#include "ControleurParametre.h"
#include "Vue.h"
#include "VueParametre.h"

// Definition des attributs de classe
ControleurParametre* ControleurParametre::instance = nullptr;

// Constructeur et Destructeur
ControleurParametre::ControleurParametre() : Controleur((new VueParametre())) { getVue()->setControleur(this); }
ControleurParametre::~ControleurParametre() {
	instance = nullptr;
};

ControleurParametre* ControleurParametre::getControleurParametre()
{
	if (instance == nullptr) {
		instance = new ControleurParametre();
	}
	return instance;
};

// Méthode
void ControleurParametre::definirParametresJeu(int mode)
{
	// Gestion des erreurs
	if (mode != 1 && mode != 2 && mode != 3) {
		throw exception();
	}

	// Stock du choix + Changement de controleur vers la partie
	// -----
	Application::getApplication()->changeControleurVariante();
}
