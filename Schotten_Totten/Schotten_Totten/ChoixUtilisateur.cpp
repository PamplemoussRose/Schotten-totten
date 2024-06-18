#include "ChoixUtilisateur.h"

// Definition des attributs de classe
ChoixUtilisateur* ChoixUtilisateur::instance = nullptr;

// Constructeur et Destructeur
ChoixUtilisateur::ChoixUtilisateur() : choixVariante(1), choixParam(1) { }
ChoixUtilisateur::~ChoixUtilisateur() {
	instance = nullptr;
};

ChoixUtilisateur* ChoixUtilisateur::getChoixUtilisateur()
{
	if (instance == nullptr) {
		instance = new ChoixUtilisateur();
	}
	return instance;
};


