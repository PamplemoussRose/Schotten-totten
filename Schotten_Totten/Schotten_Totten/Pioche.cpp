#include "Pioche.h"
#include <iostream>

Carte* Pioche::enleverCarteDessus()
{
	Carte* carteEnlev�e = *pioche.end() ;
	pioche.pop_back();
	return carteEnlev�e;
}

void Pioche::ajouterDessous(Carte& carte)
{
	pioche.insert(pioche.begin(), &carte);
}

void Pioche::melange()
{
	random_device rand;
	mt19937 g(rand());
	// melange le vector
	shuffle(pioche.begin(), pioche.end(), g);
}
