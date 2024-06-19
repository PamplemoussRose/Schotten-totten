#include "ControleurJeuTactique.h"
ControleurJeuTactique* ControleurJeuTactique::instance = nullptr;

ControleurJeuTactique* ControleurJeuTactique::getInstance()
{
	if (instance == nullptr) {
		//instance = new ControleurJeuTactique();

	}
	return instance;
}

ControleurJeuTactique::~ControleurJeuTactique() {
	instance = nullptr;
};

void ControleurJeuTactique::initPartie()
{
}

void ControleurJeuTactique::deroulementTours()
{
}

void ControleurJeuTactique::deroulementPartie()
{
}

void ControleurJeuTactique::finPartie()
{
}
