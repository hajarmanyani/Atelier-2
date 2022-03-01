#include "client.h"
#include <iostream>
using namespace std;
int client::cpt = 0;

client::client() {
	this->mat = ++client::cpt;
	this->nom = " ";
	this->prenom = " ";
	this->adresse = " ";
	this->lc = vector<compte*>();
}

client::client(string n, string pr, string adr)
{
	this->mat = ++client::cpt;
	this->nom = n;
	this->prenom = pr;
	this->adresse = adr;
}

client::~client()
{
	std::cout << "destructeur de la classe client" << std::endl;
}
