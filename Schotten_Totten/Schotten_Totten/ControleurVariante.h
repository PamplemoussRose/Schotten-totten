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
	ControleurVariante(VueVariante* vue);

	void choisirVariante(string choix);
};
#endif