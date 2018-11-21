#include "pch.h"
#include "Coordinate.h"
#include <iostream>

using namespace std;

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate   " << m_iX << " " << m_iY << endl;
	//查看调用的顺序，如果是调用A点的，则会先打印A点的坐标，反之则是B点的坐标
};

Coordinate::~Coordinate()
{
	cout << "~Coordinate   " << m_iX << " " << m_iY << endl;
	//与调用顺序同理
};

void Coordinate::setX(int x)
{
	m_iX = x;
}

int Coordinate::getX()
{
	return m_iX;
};

void Coordinate::setY(int y)
{
	m_iY = y;
}

int Coordinate::getY()
{
	return m_iY;
};
