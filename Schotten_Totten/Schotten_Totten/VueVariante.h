#ifndef GUARD_VUE_VARIANTE
#define GUARD_VUE_VARIANTE
#include "Vue.h"
#include "ControleurVariante.h"
#include <iostream>

class ControleurVariante;

class VueVariante : public Vue
{
public:
	void setControleur(ControleurVariante* pControleur) { Vue::setControleur(pControleur); };

	void affiche() override;
	void erreurChoixVariante();

private:
	void afficheTitre();
	void afficheChoixVariantes();
};

#endif

