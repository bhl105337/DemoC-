#ifndef Rect_h__
#define Rect_h__

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Rect : public Shape
{
public:
	Rect(double w, double h);
	~Rect();
	virtual double calcArea();
protected:
	double m_dWidth;
	double m_dHeight;
};

#endif
