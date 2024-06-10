#include "VueParametre.h"
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

int VueParametre::choixIAHumain()
{
    int mode;
    cout << "Avec qui voulez vous jouez? (1,2 ou 3";
    cout << "1: Humain VS Ordi";
    cout << "2: Humain VS Humain";
    cout << "3: Ordi VS Ordi";
    cin >> mode;

    getControleur()->definirParametresJeu(mode);
    

}
