#ifndef CARTE_HEADER
#define CARTE_HEADER
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Carte {
private:

	vector<vector<int>> choixEffet();
	template<class ...Args> void effet(Args... args);
};
#endif

