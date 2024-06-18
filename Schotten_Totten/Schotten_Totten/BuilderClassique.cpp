#include "BuilderClassique.h"

BuilderClassique::BuilderClassique()
{
    this->Reset();
}
BuilderClassique::BuilderClassique(BuilderClassique&& other) noexcept
{
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
    vector<Borne*> lstBornes;
    for (int i = 0; i < 9; ++i) {
        lstBornes.push_back(new Borne());//créé une nouvelle borne et l'ajoute
    }
    plateauBuild->setBornes(move(lstBornes));//appeler méthode de notre plateau pour ajouter une borne 
}

void BuilderClassique::setPiocheBuilder() 
{
    Pioche* pioche = new Pioche();
    for (int i = 0; i < 54; ++i) {
        Carte* carte = new Carte();
        pioche->ajouterDessous(*carte);
    }
    plateauBuild->setPiocheClan(move(pioche));
}

Plateau* BuilderClassique::GetResult()
{
    Plateau * result = this->plateauBuild;
    this->Reset();
    return result;
}
