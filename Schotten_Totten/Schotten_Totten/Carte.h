#ifndef CARTE_HEADER
#define CARTE_HEADER

#include <vector>
#include <string>
#include <memory>
#include "Couleurs.h"

using namespace std;

class Carte {
public:
	//Methode
	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	virtual vector<vector<unsigned int>> choixEffet(unsigned int joueur)=0;
	/*!
	* Methode d'application de l'effet de la carte
	*/
	template<class ...Args> void effet(Args... args);

	/**
	* Permet de transformer le vecteur pour appeler la version variadic de la methode
	*/
	void effet(vector<unsigned int> lstChoix);

	virtual ~Carte() = default;  // Destructeur virtuel pour rendre la classe polymorphe

	
};
#endif // !CARTE_HEADER

