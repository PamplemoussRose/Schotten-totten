#ifndef VUEDEMANDECARTE_HEADER
#define VUEDEMANDECARTE_HEADER
#include <iostream>
#include <vector>
using namespace std;
class VueDemandeCarte {
public:
	unsigned int demandeCarte();/* {
		cout << "Quelle carte voulez-vous jouer ?" << endl;
		unsigned int numeroCarteChoisie;
		cin >> numeroCarteChoisie;
		return numeroCarteChoisie;
	}*/
	vector<int> demandeCarteClan();
};
#endif