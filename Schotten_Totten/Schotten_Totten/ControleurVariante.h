#ifndef CONTROLEURVARIANTE_HEADER
#define CONTROLEURVARIANTE_HEADER
#include "VueVariante.h"
#include "Controleur.h"
using namespace std;

class VueVariante;


class ControleurVariante : public Controleur
{
public:
	ControleurVariante(VueVariante& vue) : Controleur(vue) { vue.setControleur(this); };

private:
	void choisirVariante();
};
#endif