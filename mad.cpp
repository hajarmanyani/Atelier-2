#include "mad.h"

mad::mad() {
	this->argent = 0.0;
}

mad::mad(double a)
{
	this->argent = a;
}

bool mad::operator>(const mad& m) const
{
	return (this->argent > m.argent);
}

bool mad::operator<(const mad& m) const
{
	return !(this->argent > m.argent);
}

mad& mad::operator+(const mad& m)
{
	mad md;
	md=this->argent+m.argent;
	return md;
}

mad& mad::operator-(const mad& m)
{
	mad md;
	md = this->argent - m.argent;
	return md;
}

mad& mad::operator*(const mad& m)
{
	mad md;
	md = this->argent * m.argent;
	return md;
}

mad& mad::operator/(const mad& m)
{
	mad md;
	md = this->argent / m.argent;
	return md;
}

void mad::afficher() const
{
	std::cout << this->argent << std::endl;
}

mad::~mad()
{
	std::cout << "destructeur de la classe mad" << std::endl;
}
