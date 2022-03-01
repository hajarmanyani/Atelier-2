#include "compteEpargne.h"
#include "compte.h"
#include "client.h"
#include "mad.h"
#include <iostream>
using namespace std;

compteEpargne::compteEpargne(client cl, mad s, float ti):compte(cl,s)
{
    this->ti = (this->ti >=0 && this->ti <= 100)? ti:0 ;
}

mad compteEpargne::calcul_interet() const
{
    mad x;
    x = this->compte::calcul_interet() * (1 - this->ti);
    return x;
}

bool compteEpargne::retirer_argent(mad somme)
{
    mad x = this->compte::calcul_interet();
    if (x > somme && somme > (x/2)) {
        return true;
    }
    return false;
}

compteEpargne::~compteEpargne()
{
    std::cout << "destructeur de la classe compteEpargne" << std::endl;
}
