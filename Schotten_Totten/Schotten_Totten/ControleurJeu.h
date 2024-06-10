#ifndef CONTROLEURJEU_HEADER
#define CONTROLEURJEU_HEADER
#include <vector>
using namespace std;


class ControleurJeu {
public:
	virtual void initPartie()=0;
	virtual void deroulementTours()=0;
	virtual void deroulementPartie()=0;
	virtual void finPartie()=0;

};
#endif