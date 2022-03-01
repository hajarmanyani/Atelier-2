#pragma once
#include "compte.h"
#include "client.h"
#include "mad.h"
#include <iostream>
using namespace std;

class compteCourant :
    public compte
{
private:
    mad decouvert;
public:
    compteCourant(client cl, mad s, mad dc);
    bool retirer_argent(mad somme) override;
    ~compteCourant();
};

