#ifndef PIOCHETACTIQUE_HEADER
#define PIOCHETACTIQUE_HEADER
#include "CarteTactique.h"
#include "Pioche.h"

class PiocheTactique : public Pioche {
public:
	/*!
	* \brief construit la pioche de carte tactique
	*/
	PiocheTactique() :Pioche() {};
};
#endif