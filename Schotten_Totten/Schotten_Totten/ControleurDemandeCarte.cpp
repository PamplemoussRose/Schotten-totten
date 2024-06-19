#include "ControleurDemandeCarte.h"

unsigned int ControleurDemandeCarte::choixCarte(Joueur& joueur, Joueur& autreJoueur)
{
    unsigned int numeroCarteChoisie;
    bool choixFait = false;
    while (!choixFait) {
        //cin >> numeroCarteChoisie;
        numeroCarteChoisie = vue.demandeCarte();
        if (numeroCarteChoisie != 0 && joueur.getNbreCartes() >= numeroCarteChoisie) { // != 0 signifie que l'utilisateur n'a pas entr� un nombre
            Carte* carteChoisie = joueur.getCarteMainPosition(numeroCarteChoisie - 1); //-1 carte la carte 1 est � la position 0

            CarteTactique* carteTactique = dynamic_cast<CarteTactique*>(carteChoisie);
            if (carteTactique) {// si c'est une carte Tactique
                cout << "La carte s�lectionn�e est une instance de la classe CarteTactique" << endl;

                if (joueur.getnbreCartesTactiquesJoues() <= autreJoueur.getnbreCartesTactiquesJoues()) { // S'il peut jouer sa carte tactique
                    choixFait = true;
                    return numeroCarteChoisie;
                }
            }
            else { // Si ce n'est pas une carte tactique
                cout << "La carte s�lectionn�e n'est pas une instance de la classe CarteTactique" << endl;
                choixFait = true;
                return numeroCarteChoisie;
            }
        }
    }
}



vector<unsigned int> ControleurDemandeCarte::choixApplicationCarte(Carte& carte) {
    return { 0 };
};

