#include "VueDemandeCarte.h"


unsigned int VueDemandeCarte::demandeCarte() {
        //afficher la main du joueur ici (afficheMain)
        cout << "Quelle carte voulez-vous jouer ?" << endl;
        unsigned int numeroCarteChoisie;
        cin >> numeroCarteChoisie;
        return numeroCarteChoisie;
}

vector<int> VueDemandeCarte::demandeCarteClan() {
	return { 0 };
};