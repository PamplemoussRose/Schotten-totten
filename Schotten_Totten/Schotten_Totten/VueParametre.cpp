#include "VueParametre.h"
using namespace std;
#include <iostream>
void VueParametre::erreurChoix()
{
    cout << "Ce caractère n'est pas valide" << endl;
    choixIAHumain();
}
void VueParametre::affiche() {
    choixIAHumain();
}

void VueParametre::choixIAHumain()
{
    int mode;
    cout << "Avec qui voulez vous jouez?" << endl;
    cout << "\t1: Humain VS Ordi" << endl;
    cout << "\t2: Humain VS Humain" << endl;
    cout << "\t3: Ordi VS Ordi" << endl;
    cout << "Choix :";
    cin >> mode;

    try {
        getControleur()->definirParametresJeu(mode);
    }
    catch (exception exp) {
        erreurChoix();
    }

}
