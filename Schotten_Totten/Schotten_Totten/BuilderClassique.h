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
    /*!
    * \brief initialise notre plateau
    */
    BuilderClassique();
    /*!
    * \brief initialise notre plateau a l'aide de move semantic
    */
    BuilderClassique(BuilderClassique&& other) noexcept;
    /*!
    * \brief delete le plateau
    */
    ~BuilderClassique();

    //Methodes
    /*!
    * \brief renitialise le plateau
    */
    void Reset();

    /*!
    * \brief creation de 9 bornes et ajout des bornes au jeu
    */
    void setBornesBuilder();

    /*!
    * \brief creation de de la pioche et ajout de la pioche au jeu
    */
    void setPiocheBuilder();

    /*!
    * \brief copie le plateau actuel et le retourne avec un pointeur et renitilise le plateau
    */
    Plateau* GetResult();
};

#endif
