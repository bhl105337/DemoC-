#include "pch.h"
#include "Line.h"
#include <iostream>
#include <string>

using namespace std;


Line::Line(int x1, int y1, int x2, int y2) : m_coorA(x1, y1), m_coorB(x2, y2)
{
	cout << "Line" << endl;
}

Line::~Line()
{
	cout << "~Line" << endl;
}

void Line::setA(int x, int y)
{
	// 原因：经过const修饰m_coorA之后，在这个函数当中m_coorA这个点去调用setX(x)时出现的问题
	/* 当定义出的setX(x)后，setX就是坐标类的成员函数，在this指针里学过，在调用setX(x)时等于在里面传了一个this指针
	 * 这个this指针是m_coorA，在setX传入的参数中实际上是setX(m_coorA,x)
	 * 查看Coordinate.h的报错注释一
	 */

	/* 报错注释二
	 * 此时经过const修饰之后m_coorA仅有读权限，因此就会报错
	 * 同理下面代码中m_coorA.setY(y)、m_coorA.getX、m_coorA.getY()也是一样的报错元婴
	 */
	// 解决方法 Coordinate.h报错注释三
	// m_coorA.setX(x); //在坐标系
	// m_coorA.setY(y);
};

void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
};

void Line::printInfo()
{
	cout << "1111" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	//这时m_coorA里面的getX和getY已经是常成员函数，因此常对象m_coorA可以合法的调用常成员函数
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};

void Line::printInfo() const
{
	/* 此时如果编译没报错，常成员函数和普通成员函数重名的情况下是可以互为重载的 
	 * 通过运行，印证了以上结论
	 * 但是两个互为重载的成员函数，现在无法知道调用的哪一个
	 * 如何区分：
	 */
	cout << "2222" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	//这时m_coorA里面的getX和getY已经是常成员函数，因此常对象m_coorA可以合法的调用常成员函数
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};
