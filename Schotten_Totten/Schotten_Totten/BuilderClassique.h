#ifndef BUILDERCLASSIQUE_HEADER
#define BUILDERCLASSIQUE_HEADER

#include <vector>
#include <string>
#include <memory>
#include "Builder.h"
#include "Plateau.h"
#include "Joueur.h"
#include "Borne.h"
#include "Pioche.h"
using namespace std;

class BuilderClassique : public Builder {
private:
    Plateau* plateauBuild;
public:
    //Constructeur et destructeurs
/********************************************************
* BuilderClassique
* Sorties : void
* Entraine : initialise notre plateau
*********************************************************/
    BuilderClassique();

    BuilderClassique(BuilderClassique&& other);
/********************************************************
* ~BuilderClassique
* Sorties : void
* Entraine : delete le plateau
*********************************************************/
    ~BuilderClassique();

//Methodes
/********************************************************
* Reset
* Sorties : void
* Entraine : renitialise le plateau
*********************************************************/
    void Reset();

/********************************************************
* setBornesBuilder
* Sorties : void
* Entraine : creation de 9 bornes et ajout des bornes au jeu
*********************************************************/
    void setBornesBuilder();
/********************************************************
* setPiocheBuilder
* Sorties : void
* Entraine : creation de de la pioche et ajout de la pioche au jeu
*********************************************************/
    void setPiocheBuilder();
/********************************************************
* GetResult
* Sorties : un pointeur vers le plateau
* Entraine : copie le plateau actuel et le retourne et renitilise le plateau
*********************************************************/
    Plateau* GetResult();
};

#endif
