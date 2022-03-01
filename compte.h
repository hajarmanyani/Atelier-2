#pragma once
#include "client.h"
#include "mad.h"
#include "operation.h"
#include <iostream>
#include <vector>
using namespace std;

class compte
{
private:
	static int cpt;
	int numcompte;
	client prop;
	mad solde;
protected:
	vector<operation*> lo;
public:
	compte(client cl, mad s);
	virtual bool retirer_argent(mad somme);
	void deposer_argent(mad somme);
	void consulter_solde() const;
	bool transferer(compte cp, mad somme);
	virtual mad calcul_interet() const;
	void trace() const;
	~compte();
};

