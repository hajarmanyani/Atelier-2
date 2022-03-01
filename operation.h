#pragma once
#include "mad.h"
#include "date.h"
#include <iostream>
using namespace std;

class operation
{
	int numero;
	static int cpt;
	mad montant;
	string libelle;
	date dt;
public:
	operation(mad m, date d, string l);
	void afficher() const;
	mad montant_op() const;
	~operation();
};

