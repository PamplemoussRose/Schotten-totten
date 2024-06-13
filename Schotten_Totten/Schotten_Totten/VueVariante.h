#ifndef GUARD_VUE_VARIANTE
#define GUARD_VUE_VARIANTE
#include "Vue.h"
#include "ControleurVariante.h"
#include <iostream>

class ControleurVariante;

class VueVariante : public Vue
{
private:
	ControleurVariante* controleur;

public:
	void setControleur(ControleurVariante* pControleur) { controleur = pControleur; };
	ControleurVariante* getControleur() { return controleur; }

	void affiche() override;
	void erreurChoixVariante();

private:
	void afficheTitre();
	void afficheChoixVariantes();
};

#endif

