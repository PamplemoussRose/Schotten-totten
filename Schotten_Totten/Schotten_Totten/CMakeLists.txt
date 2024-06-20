# Spécifie la version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Schotten_Totten)

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter les fichiers sources et les fichiers en-tête
add_executable(Test
    Schotten_Totten.cpp
    Test.cpp
    ControleurBorne.cpp
    ControleurDemandeCarte.cpp
    ControleurHumain.cpp
    ControleurIAAlea.cpp
    ControleurJeu.cpp
    ControleurJeuTactique.cpp
    ControleurJeuV1.cpp
    ControleurParametre.cpp
    ControleurPersonnage.cpp
    ControleurPioche.cpp
    ControleurVariante.cpp
    ControleurVictoire.cpp
    Banschee.cpp
    Carte.cpp
    CarteClan.cpp
    ChasseurTete.cpp
    ColinMaillard.cpp
    CombatBoue.cpp
    Espion.cpp
    Joker.cpp
    PorteBouclier.cpp
    Stratege.cpp
    Traitre.cpp
    Borne.cpp
    Builder.cpp
    BuilderClassique.cpp
    ChoixUtilisateur.cpp
    EtatJeu.cpp
    Joueur.cpp
    Pioche.cpp
    PiocheClan.cpp
    Plateau.cpp
    Vue.cpp
    VueDemandeCarte.cpp
    VueJeu.cpp
    VueJeuTactique.cpp
    VueJeuV1.cpp
    VueParametre.cpp
    VueVariante.cpp
)

# Inclure les répertoires des fichiers en-tête
target_include_directories(Test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
