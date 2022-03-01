#include "compte.h"
#include "client.h"
#include "mad.h"
#include <iostream>
using namespace std;
int compte::cpt = 0;

compte::compte(client cl, mad s)
{
    this->numcompte = ++compte::cpt;
    this->prop = cl;
    this->solde = s;
    this->lo = vector<operation*>();  
}

bool compte::retirer_argent(mad somme)
{
    if (solde.operator>(somme)) {
        return true;
    }
    else {
        return false;
    }
}

void compte::deposer_argent(mad somme)
{
    this->solde = this->solde+somme;
}

void compte::consulter_solde() const
{
    std::cout << "Numéro de compte: " << this->numcompte<< std::endl;
    std::cout << this->solde.afficher() << std::endl;
}

bool compte::transferer(compte cp, mad somme)
{
    if (this->retirer_argent(somme)) {
        cp.deposer_argent(somme);
        return true;
    }
    else { 
        return false; 
    }
}

mad compte::calcul_interet() const
{
    return this->solde;
}

void compte::trace() const
{
    for (int i = 0; i < this->lo.size();i++) {
        this->lo[i]->afficher();
    }
}

compte::~compte()
{
    std::cout << "destructeur de la classe compte" << std::endl;
}
