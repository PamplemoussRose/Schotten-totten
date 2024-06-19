#include "ControleurJeuTactique.h"
#include "VueJeuTactique.h"
ControleurJeuTactique* ControleurJeuTactique::instance = nullptr;

inline ControleurJeuTactique::ControleurJeuTactique() :ControleurJeu(new VueJeuTactique())
{
}

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
