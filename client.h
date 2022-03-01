#pragma once
#include <iostream>
#include <vector>
#include "compte.h"
using namespace std;

class client
{
private:
	int mat;
	static int cpt;
	string nom;
	string prenom;
	string adresse;
	vector<compte*> lc;
public:
	client();
	client(string n, string pr, string adr);
	~client();
};

