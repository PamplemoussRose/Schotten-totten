#include "VueDemandeCarte.h"


unsigned int VueDemandeCarte::demandeCarte() {
    //Joueur joueurActuel = vue->getControleur()->getJoueurActuel();
    //vue->afficheMain(joueurActuel);//affiche la main du joueur
    cout << "Quelle carte voulez-vous jouer ?" << endl;
    unsigned int numeroCarteChoisie;
    cin >> numeroCarteChoisie;
    return numeroCarteChoisie;
}

vector<int> VueDemandeCarte::demandeCarteClan() {
    return { 0 };
};