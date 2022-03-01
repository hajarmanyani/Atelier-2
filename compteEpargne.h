#pragma once
#include "compte.h"
#include "client.h"
#include "mad.h"
#include <iostream>
using namespace std;

class compteEpargne :
    public compte
{
private:
    float ti;
public:
    compteEpargne(client cl, mad s,float ti);
    mad calcul_interet() const override;
    bool retirer_argent(mad somme) override;
    ~compteEpargne();
};

