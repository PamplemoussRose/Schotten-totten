#ifndef GUARD_VUE
#define GUARD_VUE
using namespace std;
class Vue
{
	/*
private:
	//Attributs
	Controleur* controleur;

public:
*/
	//Methodes
	/*!
	* \definit le controleur
	*/
	//void setControleur(Controleur* pControleur) { controleur = pControleur; };
	/*!
	* \Recupere le controleur
	*/
	//Controleur* getControleur() { return controleur; };

public:
	/*!
	* \methode virtuelle d'affichage
	*/
	virtual void affiche()=0;
};

#endif