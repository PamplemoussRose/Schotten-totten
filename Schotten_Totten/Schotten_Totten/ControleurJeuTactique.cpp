#include "ControleurJeuTactique.h"

ControleurJeuTactique* ControleurJeuTactique::getInstance()
{
	if (instance == nullptr) {
		instance = new ControleurJeuTactique();
	}
	return instance;
}
