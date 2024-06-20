#ifndef VUEDEMANDECARTE_HEADER
#define VUEDEMANDECARTE_HEADER
#include <iostream>
#include <vector>
#include "EtatJeu.h"
#include "Plateau.h"

using namespace std;
class VueDemandeCarte {
public:
	unsigned int demandeCarte();
	vector<unsigned int> demandeCarteClan();
	/*
	vector<int> demandeModeCombat();
	vector<int> demandeChasseurTetes();
	vector<int> demandeTraitre();
	vector<int> demandBanshee();
	vector<int> demandeStratege();
	*/
};
#endif