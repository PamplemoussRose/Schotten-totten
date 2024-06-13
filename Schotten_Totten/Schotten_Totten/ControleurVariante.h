#ifndef CONTROLEURVARIANTE_HEADER
#define CONTROLEURVARIANTE_HEADER
#include <string>
#include "Controleur.h"
using namespace std;

class Vue;
class VueVariante;

class ControleurVariante : public Controleur
{
public:
	inline ControleurVariante(VueVariante* vue);
	VueVariante* getVue() { return (VueVariante*) Controleur::getVue(); }

	void choisirVariante(int choix);
};
#endif