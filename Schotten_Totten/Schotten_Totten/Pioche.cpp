#include "Pioche.h"
#include <iostream>

Carte* Pioche::enleverCarteDessus()
{
	Carte* carteEnlevée = *pioche.end() ;
	pioche.pop_back();
	return carteEnlevée;
}

void Pioche::ajouterDessous(Carte& carte)
{
	pioche.insert(pioche.begin(), &carte);
}
