#include "Carte.h"
#include "EtatJeu.h"

template<class ...Args>
inline void Carte::effet(Args ...args) {
	cout << "Carte::effet(Args ...args) : Tu devrais pas arrivé là";
}

void Carte::effet(vector<unsigned int> lstChoix) {
	if (lstChoix.size()==0) {
		effet();
	} else if (lstChoix.size() == 1) {
		effet(lstChoix[0]);
	}
}