#include "ControleurJeuTactique.h"
ControleurJeuTactique* ControleurJeuTactique::instance = nullptr;

ControleurJeuTactique* ControleurJeuTactique::getInstance()
{
	if (instance == nullptr) {
		instance = new ControleurJeuTactique();

	}
	return instance;
}
