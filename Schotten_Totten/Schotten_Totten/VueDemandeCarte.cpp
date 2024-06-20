#include "VueDemandeCarte.h"


unsigned int VueDemandeCarte::demandeCarte() {
    //Joueur joueurActuel = vue->getControleur()->getJoueurActuel();
    cout << "Quelle carte voulez-vous jouer ?" << endl;
    cout << "Choix : ";
    unsigned int numeroCarteChoisie;
    cin >> numeroCarteChoisie;
    return numeroCarteChoisie;
}

vector<unsigned int> VueDemandeCarte::demandeCarteClan() {
    // Demande sur quelle borne poser la carte
    unsigned int nBorneChoisie;
    EtatJeu* etatJeu = EtatJeu::getInstance();
    unsigned int nbBornes = etatJeu->getPlateau()->getBornes().size();
    cout << "Sur quelle borne voulez vous poser cette carte (de 1 a " << nbBornes << ")" << endl;
    cout << "Choix : ";
    cin >> nBorneChoisie;
    return { nBorneChoisie, etatJeu->getNumJoueurActuel() };
};