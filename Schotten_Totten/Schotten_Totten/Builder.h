#ifndef BUILDER_HEADER
#define BUILDER_HEADER
#include <vector>
#include <string>
#include <memory>
#include "Plateau.h"
#include "Pioche.h"
#include "Borne.h"
using namespace std;

class Builder {
public:
	/*!
	* \brief destructeur de builder
	*/
	virtual ~Builder() {}
	/*!
	* \brief methode virtuelle pure pour renitialiser
	*/
	virtual void reset() const = 0;
	/*!
	* \brief methode virtuelle pure pour les bornes du builder
	*/
	virtual void setBornesBuilder() const = 0;
	/*!
	* \brief methode virtuelle pure pour la pioche du builder
	*/
	virtual void setPiocheBuilder() const = 0;
	/*!
	* \brief methode virtuelle pure pour retourner le plateau construit
	*/
	virtual Plateau getResult() const = 0;
};
#endif

