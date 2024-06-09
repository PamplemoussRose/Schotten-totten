#include "BuilderClassique.h"

BuilderClassique::BuilderClassique()
{
    this->Reset();
}
BuilderClassique::BuilderClassique(BuilderClassique&& other) noexcept {
    plateauBuild = other.plateauBuild;
    other.plateauBuild = nullptr;
}
BuilderClassique::~BuilderClassique()
{
    delete plateauBuild;
}

void BuilderClassique::Reset()
{
    plateauBuild = new Plateau();
}

void BuilderClassique::setBornesBuilder()
{//creation de Bornes et ajout des bornes au jeu
    vector<Borne> lstBornes;
    for (int i = 0; i < 9; ++i) {
        lstBornes.push_back(Borne());//créé une nouvelle borne et l'ajoute
    }
    plateauBuild->setBornes(lstBornes);//appeler méthode de notre plateau pour ajouter une borne 
}

void BuilderClassique::setPiocheBuilder()
{//creation de Bornes et ajout de la pioche au jeu
    vector<Pioche> lstPioche;
    for (int i = 0; i < 54; ++i) {
        lstPioche.push_back(Pioche());
    }
    plateauBuild->setPioche(lstPioche);
}

Plateau* BuilderClassique::GetResult()
{//creation de Bornes et ajout de la pioche au jeu
    vector<Pioche> lstPioche;
    for (int i = 0; i < 54; ++i) {// verifier bon nombre de cartes
        lstPioche.push_back(Pioche());
    }
    plateauBuild->setPioche(lstPioche);
}
