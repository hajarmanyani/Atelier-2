#pragma once
#include <iostream>
#include "devise.h"
using namespace std;

class mad: public devise
{ 
private:
	double argent;
public:
	mad();
	mad(double a);
	bool operator>(const mad& m) const;
	bool operator<(const mad& m) const;
	mad& operator+(const mad& m);
	mad& operator-(const mad& m);
	mad& operator*(const mad& m);
	mad& operator/(const mad& m);
	void afficher() const override;
	~mad();
};

