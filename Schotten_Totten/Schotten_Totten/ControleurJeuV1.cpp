#include "ControleurJeuV1.h"
#include "VueJeuV1.h"
ControleurJeuV1* ControleurJeuV1::instance = nullptr;

inline ControleurJeuV1::ControleurJeuV1() :ControleurJeu((VueJeu*)new VueJeuV1())
{

}

ControleurJeuV1* ControleurJeuV1::getInstance()
{
	if (instance == nullptr) {
		instance = new ControleurJeuV1();
	}
	return instance;
}

ControleurJeuV1::~ControleurJeuV1()
{
	instance = nullptr;
}

void ControleurJeuV1::initPartie() {
	getEtatJeu()->getInstance();
	getEtatJeu()->getPlateau();
	PiocheClan* piocheClan = (PiocheClan*)(getEtatJeu()->getPlateau())->getPiocheClan();
	ControleurPioche* controleurPiocheClan = new ControleurPioche();
	ChoixUtilisateur* choixU=ChoixUtilisateur::getChoixUtilisateur();
	if(choixU->estHvsH()){
		ControleurPersonnage* controleurPerso1 = new ControleurHumain();
		ControleurPersonnage* controleurPerso2 = new ControleurHumain();
	}
	else if (choixU->estHvsIA()) {
		ControleurPersonnage* controleurPerso1= new ControleurHumain();
		ControleurPersonnage* controleurPerso2 = new ControleurIAAlea();
	}
	else {
		ControleurPersonnage* controleurPerso1 = new ControleurIAAlea();
		ControleurPersonnage* controleurPerso2 = new ControleurIAAlea();
	}
	ControleurDemandeCarte* controleurPerso2 = new ControleurDemandeCarte();
}

void ControleurJeuV1::revendiqueBorne(unsigned int numBorne)
{
	shared_ptr<Plateau> plateau = getEtatJeu()->getPlateau();
	vector<Borne*> bornes = plateau->getBornes();
	if ((bornes[numBorne - 1])->revendicable()) {
		string rep;
		cout << " Revendiquer(1) ou piocher(2) ? " << endl;
		cin >> rep;
		if (rep == "1") {
			//si joueur 1
			if ((getBornes()[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 1) {
				bornes[numBorne - 1]->setStatut(1);
				cout << "Le joueur 1 revendique la borne" << endl;
			}
			//si joueur 2
			if ((getBornes()[numBorne - 1])->calculeRevendication(*bornes[numBorne - 1]) == 2) {
				bornes[numBorne - 1]->setStatut(-1);
				cout << "Le joueur 2 revendique la borne" << endl;
			}
		}

	}
}

void ControleurJeuV1::jouerCarteSurBorne(CarteClan& carte, Borne& borne)
{
	if (true) {// si joueur 1
		borne.AjouterCarteJ1(carte);
	}
	else {
		borne.AjouterCarteJ1(carte);
	}

}

void ControleurJeuV1::deroulementPartie()
{
}


void ControleurJeuV1::finPartie() {


	delete getEtatJeu()->getPlateau()->getInstance();
}

