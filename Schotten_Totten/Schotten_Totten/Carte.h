#ifndef CARTE_HEADER
#define CARTE_HEADER

#include <vector>
#include <string>
#include <memory>
#include "Couleurs.h"

using namespace std;
#include "Couleurs.h"
class Carte {
public:
	//Methode
	/*!
	* Methode donnant les choix possibles avec leurs valeurs possibles
	*/
	vector<vector<unsigned int>> choixEffet();
	/*!
	* Methode d'application de l'effet de la carte
	*/
	template<class ...Args> void effet(Args... args);

	
};
#endif // !CARTE_HEADER

