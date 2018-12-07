#include "pch.h"
#include "Rect.h"
#include <iostream>

using namespace std;

Rect::Rect(double w, double h)
{
	m_dWidth = w;
	m_dHeight = h;
	cout << "Rect()" << endl;
}


Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::calcArea()
{
	cout << "Rect::calcArea()" << endl;
	return m_dWidth * m_dHeight;
}
