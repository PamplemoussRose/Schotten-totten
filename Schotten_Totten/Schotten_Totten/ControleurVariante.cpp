#include "ControleurVariante.h"
#include "VueVariante.h"
#include "Vue.h"

ControleurVariante::ControleurVariante(VueVariante* vue) : Controleur((Vue*)vue) { vue->setControleur(this); };

void ControleurVariante::choisirVariante(string choix)
{
}
