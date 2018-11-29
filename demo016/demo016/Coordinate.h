#include <iostream>
#include <string>

using namespace std;

class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};
