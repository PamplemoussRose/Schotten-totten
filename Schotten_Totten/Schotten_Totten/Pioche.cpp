#include "Pioche.h"
#include <iostream>

Carte* Pioche::enleverCarteDessus()
{
	Carte* carteEnlev�e = *(pioche.end()-1) ;
	pioche.pop_back();
	nbCartesRestantes -= 1;
	return carteEnlev�e;
}

void Pioche::ajouterDessous(Carte& carte)
{
	pioche.push_back(&carte);
}

void Pioche::melange()
{
	random_device rand;
	mt19937 g(rand());
	// melange le vector
	shuffle(pioche.begin(), pioche.end(), g);
}
