#pragma once
#include <iostream>

class date
{
private:
	int heure, minute, seconde;
public:
	date();
	date(int h, int m, int s);
	void afficher() const;
	~date();
};

