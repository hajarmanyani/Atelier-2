#pragma once
#include "compte.h"
#include "client.h"
#include "mad.h"
#include "operation.h"
#include <iostream>
#include <vector>

class comptePayant :
    public compte
{
private:
    float tp;
public:
    comptePayant(client cl, mad s, float tp);
    void payement();
    ~comptePayant();
};

