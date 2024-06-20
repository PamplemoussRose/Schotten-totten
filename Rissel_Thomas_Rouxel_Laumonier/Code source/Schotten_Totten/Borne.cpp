#include "Borne.h"


bool Borne::revendicable()
{
	return (cartesJ1.size() == nbCartesRevendiquer && cartesJ2.size() == nbCartesRevendiquer);
}

void Borne::AjouterCarteJ1(CarteClan& carteJ1)
{
	cartesJ1.push_back(&carteJ1);
}

void Borne::AjouterCarteJ2(CarteClan& carteJ2)
{
	cartesJ2.push_back(&carteJ2);
}