#include "VueParametre.h"
using namespace std;
#include <iostream>
void VueParametre::erreurChoix()
{
    cout << " \033[41m " << "Ce caractère n'est pas valide" << " \033[0m" << endl;
    choixIAHumain();
}
void VueParametre::affiche() {
    choixIAHumain();
}

void VueParametre::choixIAHumain()
{
    unsigned int mode;
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
