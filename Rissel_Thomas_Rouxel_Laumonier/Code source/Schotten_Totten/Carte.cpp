#include "Carte.h"
#include "EtatJeu.h"

template<class ...Args>
inline void Carte::effet(Args ...args) {
	cout << "Carte::effet(Args ...args) : Tu devrais pas arrive la";
}

vector<unsigned int> Carte::effet(vector<unsigned int> lstChoix) {
	/* Cette solution ne fonctionne pas car l'on ne connait pas le type précis de Carte
	if (lstChoix.size()==0) {
		effet();
	} else if (lstChoix.size() == 1) {
		effet(lstChoix[0]);
	}
	else if (lstChoix.size() == 2) {
		effet(lstChoix[0], lstChoix[1]);
	}*/
	vector<unsigned int> infoApresEffet; // Ex : sur quel borne la carte est joué
	if (CarteClan* carteClan = dynamic_cast<CarteClan*>(this)) {
		infoApresEffet = carteClan->effet(lstChoix[0], lstChoix[1]);
	}

	return infoApresEffet;
}