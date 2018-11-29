#include "pch.h"
#include "Line.h"
#include <iostream>
#include <string>

using namespace std;


Line::Line(int x1, int y1, int x2, int y2)
{
	m_pCoorA = new Coordinate(x1, y1);
	m_pCoorB = new Coordinate(x2, y2);
	cout << "Line()" << endl;
}

Line::~Line()
{
	delete m_pCoorA;
	m_pCoorA = NULL;
	delete m_pCoorB;
	m_pCoorB = NULL;
	cout << "~Line()" << endl;
}

void Line::printInfo()
{
	cout << "printInfo()" << endl;

	/*因为成员是指针，所以用指针的方式访问成员函数*/
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}
