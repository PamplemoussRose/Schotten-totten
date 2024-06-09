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
	virtual ~Builder() {}
	virtual void reset() const = 0;
	virtual void setBornesBuilder() const = 0;
	virtual void setPiocheBuilder() const = 0;
	virtual Plateau getResult() const = 0;
};
#endif

