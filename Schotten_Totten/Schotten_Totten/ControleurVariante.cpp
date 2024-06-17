#include "ControleurVariante.h"
#include "VueVariante.h"
#include "Vue.h"

ControleurVariante::ControleurVariante(VueVariante* vue) : Controleur((Vue*)vue) { vue->setControleur(this); };

void ControleurVariante::choisirVariante(int choix)
{
	// Gestion de l'erreur
	if (choix == 0 || choix > 2) {
		getVue()->erreurChoixVariante();
	}

	// Changement de controleur vers les paramètres de joueurs
}
