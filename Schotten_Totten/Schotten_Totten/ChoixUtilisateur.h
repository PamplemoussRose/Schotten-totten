#ifndef GUARD_CHOIX_UTILISATEUR
#define GUARD_CHOIX_UTILISATEUR

class ChoixUtilisateur
{
private:
	static ChoixUtilisateur* instance;

	/**
	* Permet le stock de la variante choisie par l'utilisateur afin d'être utilisé
	* lors de la création de EtatJeu dans ControleurJeu::initPartie
	*/
	unsigned int choixVariante;
	/**
	* Permet le stock des paramètres de joueurs choisis par l'utilisateur afin d'être utilisé
	* lors de la création de EtatJeu dans ControleurJeu::initPartie
	*/
	unsigned int choixParam;
	/*!
	* \lie la vueParametre à  ce controleur
	*/
	inline ChoixUtilisateur();
public:
	/**
	 * Singletons should not be cloneable.
	 */
	ChoixUtilisateur(ChoixUtilisateur& other) = delete;
	/**
	 * Singletons should not be assignable.
	 */
	void operator=(const ChoixUtilisateur&) = delete;
	/**
	* Destruction de l'instance
	*/
	~ChoixUtilisateur();

	static ChoixUtilisateur* getChoixUtilisateur();

	void setChoixVariante(unsigned int pChoix) { choixVariante = pChoix; };

	void setChoixParam(unsigned int pChoix) { choixParam = pChoix; };

	bool estPartieClassique() const { return (choixVariante == 1) ? true : false; };

	bool estPartieTactique() const { return (choixVariante == 2) ? true : false; };

	bool estHvsH() const { return (choixParam == 2) ? true : false; };

	bool estHvsIA() const { return (choixParam == 1) ? true : false; };

	bool estIAvsIA() const { return (choixParam == 3) ? true : false; };
};

#endif