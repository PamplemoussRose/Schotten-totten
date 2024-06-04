
#include "Carte.h"
#ifndef CARTETACTIQUE_HEADER
#define CARTETACTIQUE_HEADER
using namespace std;

class CarteTactique : public Carte{
private:
	string nom;
public:
	string getNom() { return nom; };

};
#endif