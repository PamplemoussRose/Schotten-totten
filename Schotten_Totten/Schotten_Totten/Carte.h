#ifndef CARTE_HEADER
#define CARTE_HEADER
#include <vector>
#include <string>
using namespace std;

class Carte {
public:
	vector<vector<int>> choixEffet();
	template<class ...Args> void effet(Args... args);
};
#endif

