#include "BuilderClassique.h"

BuilderClassique::BuilderClassique()
{
    this->Reset();
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
    vector<Borne*> lstBornes;
    for (int i = 0; i < 9; ++i) {
        lstBornes.push_back(new Borne());//cr�� une nouvelle borne et l'ajoute
    }
    plateauBuild->setBornes(move(lstBornes));//appeler m�thode de notre plateau pour ajouter une borne 
}

void BuilderClassique::setPiocheBuilder()
{//creation de Bornes et ajout de la pioche au jeu
    vector<Pioche*> lstPioche;
    for (int i = 0; i < 54; ++i) {
        lstPioche.push_back(new Pioche());
    }
    plateauBuild->setPioche(move(lstPioche));
}

Plateau* BuilderClassique::GetResult()
{//creation de Bornes et ajout de la pioche au jeu
    vector<Pioche*> lstPioche;
    for (int i = 0; i < 54; ++i) {// verifier bon nombre de cartes
        lstPioche.push_back(new Pioche());
    }
    plateauBuild->setPioche(move(lstPioche));
}
