#pragma once
#include <string>;
#include <iostream>

using namespace std;


class Coordinate
{
	/*同样的访问限定符可以出现多次*/
public:
	Coordinate();
	~Coordinate();
public:
	int m_iX;
	int m_iY;
};
