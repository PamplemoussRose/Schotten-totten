#include "VueJeuV1.h"
#include "ControleurJeuV1.h"

void VueJeuV1::afficheTour(Joueur& joueurActuel)
{
    affichePlateau();
    unsigned int indiceCarte;
    unsigned int numBorne;
    cout << "Quelle carte voulez vous jouer? (1-6)" << endl;
    afficheMain(joueurActuel);
    cin >> indiceCarte;

    // Obtenir la carte choisie
    Carte* carteChoisie = joueurActuel.getCarteMainPosition(indiceCarte - 1);

    // Vérifier que la carte est bien de type CarteClan
    CarteClan* carteClanChoisie = dynamic_cast<CarteClan*>(carteChoisie);

    cout << "Sur quelle borne? (numéro: 1-9)" << endl;
    cin >> numBorne;

    Plateau* plateau = controleurV1->getEtatJeu()->getPlateau();
    vector<Borne*> bornes = plateau->getBornes();

    controleurV1->jouerCarteSurBorne(*carteClanChoisie, *bornes[numBorne - 1]);
    controleurV1->revendiqueBorne(numBorne);

    Carte* cartePiochee = controleurV1->getControPioche()->piocher(*plateau->getPiocheClan(), joueurActuel);
    cout << "Vous avez pioché : ";
    afficheCarte(cartePiochee);
    cout << "Fin de votre tour" << endl;
}
