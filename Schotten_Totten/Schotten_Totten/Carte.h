#ifndef GUARD_CARTE
#define GUARD_CARTE

#include <vector>
#include <string>
#include <memory>

using namespace std;

class Carte {
public:
	// Methodes

	/*!
	* \brief Renvoie la liste des choix possible avec la liste de valeurs possibles
	*/
	vector<vector<int>> choixEffet();
	/*!
	* \brief Effet de la carte
	*/
	template<class ...Args> void effet(Args... args);
};

#endif // !GUARD_CARTE