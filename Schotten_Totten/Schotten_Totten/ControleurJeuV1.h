#ifndef CONTROLEURJEUV1_HEADER
#define CONTROLERJEUV1_HEADER
#include "ControleurJeu.h"
#include "ControleurPioche.h"
class ControleurJeuV1 : public ControleurJeu{
	//Attributs
private:
	ControleurPioche* ControleurPioche;
};
#endif