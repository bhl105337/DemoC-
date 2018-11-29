#include "pch.h"
#include "Coordinate.h"
#include <iostream>
#include <string>

using namespace std;

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
	void printInfo() const;//验证常成员函数和普通的成员函数重名的情况，即互为重载
private:
	const Coordinate m_coorA; //这样修饰之后，运行会报错，原因参考Coordinate.h的报错注释
	Coordinate m_coorB;
};
