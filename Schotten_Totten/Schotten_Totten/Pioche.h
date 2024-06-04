#pragma once
#ifndef PIOCHE_HEADER
#define PIOCHE_HEADER
#include "Carte.h"
class Pioche {
private:
	int nbCartesRestantes;
	int nbTotal;
public:
	int getNbCartesRestantes() { return nbCartesRestantes; };
	int getNbTotal() { return nbTotal; };
};
#endif