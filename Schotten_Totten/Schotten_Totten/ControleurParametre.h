#ifndef CONTROLEURPARAMETRE_HEADER
#define CONTROLEURPARAMETRE_HEADER
#include <vector>
#include "Controleur.h"
#include "VueParametre.h"
using namespace std;


class ControleurParametre : public Controleur
{
public:
	ControleurParametre(VueParametre& vue) : Controleur(vue) { vue.setControleur(this); };

	void definirParametresJeu();
};
#endif