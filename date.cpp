#include "date.h"

date::date()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

date::date(int h, int m, int s)
{
	this->heure = ( h> 0 && h < 24) ? h : 1;
	this->minute = (m > 0 && m < 60) ? m : 1;
	this->seconde = (s > 0 && s < 60) ? s : 1;
}

void date::afficher() const
{
	std::cout << this->heure << ":" << this->minute << ":" << this->seconde << std::endl;
}

date::~date()
{
	std::cout << "destructeur de la classe date" << std::endl;
}
