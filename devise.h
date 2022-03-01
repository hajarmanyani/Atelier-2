#pragma once
class devise
{
private:
	double valeur;
public:
	devise();
	virtual void afficher() const=0;
	~devise();
};

