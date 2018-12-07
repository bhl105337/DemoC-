#ifndef Circle_h__
#define Circle_h__

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();
protected:
	double m_dR;
};
#endif
