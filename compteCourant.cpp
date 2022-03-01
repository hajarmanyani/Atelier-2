#include "compteCourant.h"
#include "compte.h"
#include "client.h"
#include "mad.h"
#include <iostream>
using namespace std;

compteCourant::compteCourant(client cl, mad s, mad dc) : compte(cl,s)
{
	this->decouvert = dc;
}

bool compteCourant::retirer_argent(mad somme)
{
	mad x;
	x = this->compte::calcul_interet();
	if (x - this->decouvert > somme) {
		return true;
	}
	return false;
}

compteCourant::~compteCourant()
{
	std::cout << "destructeur de la classe compteCourant" << std::endl;
}
