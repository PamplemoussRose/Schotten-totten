#ifndef GUARD_VUE_VARIANTE
#define GUARD_VUE_VARIANTE
#include "Vue.h"
#include "ControleurParametre.h"

class VueParametre : public Vue
{
public:
	void setControleur(ControleurParametre* pControleur) { Vue::setControleur(pControleur); };

	void affiche() override;
};

#endif