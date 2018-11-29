#include "pch.h"
#include "Coordinate.h"
#include <string>

using namespace std;

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}


Coordinate::~Coordinate()
{
}

void Coordinate::setX(int x)
{
	m_iX = x;
}

void Coordinate::setY(int y)
{
	m_iY = y;
}

/*ͬ�����const*/
int Coordinate::getX() const
{
	return m_iX;
}

int Coordinate::getY() const
{
	return m_iY;
}
