#include "VueDemandeCarte.h"


unsigned int VueDemandeCarte::demandeCarte() {
    //Joueur joueurActuel = vue->getControleur()->getJoueurActuel();
    //vue->afficheMain(joueurActuel);//affiche la main du joueur
    cout << "Quelle carte voulez-vous jouer ?" << endl;
    unsigned int numeroCarteChoisie;
    cin >> numeroCarteChoisie;
    return numeroCarteChoisie;
}

vector<unsigned int> VueDemandeCarte::demandeCarteClan() {
    // Demande sur quel borne poser la carte
    unsigned int nBorneChoisie;
    EtatJeu* etatJeu = EtatJeu::getInstance();
    unsigned int nbBornes = etatJeu->getPlateau()->getBornes().size();
    cout << "Sur quel bornes voulez vous poser cette carte (de 1 à " << nbBornes << ")" << endl;
    cout << "Choix : ";
    cin >> nBorneChoisie;
    return { nBorneChoisie, etatJeu->getNumJoueurActuel() };
};