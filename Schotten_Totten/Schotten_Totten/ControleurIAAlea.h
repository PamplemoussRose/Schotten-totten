#ifndef GUARD_CONTROLEURIAALEA
#define GUARD_CONTROLEURIAALEA
#include <iostream>
#include "ControleurPersonnage.h"
#include "Joueur.h"
#include "Carte.h"
using namespace std;
class ControleurIAAlea : public ControleurPersonnage {
public:
	ControleurIAAlea() :ControleurPersonnage() {};
	void jouerCarte(Joueur& joueur, Carte& carte);

};
#endif