#include "comptePayant.h"

comptePayant::comptePayant(client cl, mad s, float tp) : compte(cl,s)
{
	this->tp = tp;  
}

void comptePayant::payement()
{
	for (int i = 0; i < this->lo.size(); i++) {
		this->lo[i]->montant_op() = this->lo[i]->montant_op() * (1 - (this->tp / 100));
	}
}

comptePayant::~comptePayant()
{
	std::cout << "destructeur de la classe comptePayant" << std::endl;
}
