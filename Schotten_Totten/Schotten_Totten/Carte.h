#ifndef CARTE_HEADER
#define CARTE_HEADER
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Carte {
public:
	//Methode
	/*!
	* Methode pour les differents choix a faire pour l'effet de la carte
	*/
	vector<vector<int>> choixEffet();
	/*!
	* Methode d'application de l'effet de la carte
	*/
	template<class ...Args> void effet(Args... args);

	
};
#endif // !CARTE_HEADER

