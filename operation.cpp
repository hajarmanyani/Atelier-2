#include "operation.h"
#include "date.h"
#include "mad.h"
#include <iostream>
int operation::cpt = 0;

operation::operation(mad m, date d, string l)
{
	this->numero = ++operation::cpt;
	this->montant = m;
	this->dt = d;
	this->libelle = l;
}

void operation::afficher() const
{
	std::cout << "numéro " << this->numero<<  std::endl;
	std::cout << "montant " << this->montant.afficher() << std::endl;
	std::cout << "date " << this->dt.afficher() << std::endl;
	std::cout << "libellé " << this->libelle << std::endl;
}

mad operation::montant_op() const
{
	return this->montant;
}

operation::~operation()
{
	std::cout << " destructeur de la classe operation" << std::endl;
}


