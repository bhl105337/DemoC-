#include "pch.h"
#include <iostream>
#include <string>
#include "Line.h"

using namespace std;

/*例子*/
// class Coordinate
// {
// public:
// 	Coordinate(int x, int y);
// private:
// 	int m_iX;
// 	int m_iY;
// };
//
// class Line
// {
// public:
// 	Line();
// 	~Line();
// private:
// 	Coordinate* m_coorA;
// 	Coordinate* m_coorB;
// 	/*对象指针的定义*/
// };

/*初始化方式*/
// <1>
// Line::Line(): m_coorA(NULL), m_coorB(NULL)
// {
// 	//初始化列表初始化：因为此时是一个指针，因此可以赋值NULL
// }
//
// <2>
// Line::Line()
// {
// 	//构造函数初始化
// 	m_coorA = NULL;
// 	m_coorB = NULL;
// }

// <3>：多数使用这种
// Line::Line()
// {
// 	m_coorA = new Coordinate(1, 3);
// 	m_coorB = new Coordinate(5, 6);
// }
//
// Line::~Line()
// {
// 	delete m_coorA;
// 	delete m_coorB;
// }

/*
 * 练习
 * 要求
 * 定义两个类：
 * 
 * 坐标类Coordinate
 * 数据成员：横坐标m_iX，纵坐标m_iY
 * 成员函数：构造函数，析构函数，数据封装函数
 * 
 * 线段类Line
 * 数据成员：点A指针m_pCoorA，点B指针m_pCoorB
 * 成员函数：构造函数，析构函数，信息打印函数
 * 
 * 参考Coordinate.h，Coordinate.cpp，Line.h，Line.cpp
 */

int main()
{
	/*对象成员指针*/
	/*回忆：对象成员：对象成了另一个对象（类）的成员*/
	/*对象成员指针：对象的指针成了另一对象（类）的成员*/
	/*对象成员和对象成员指针的不同：
	 * 对于对象成员来说，定义基本数据成员每一个会占用8个基本内存单元，而定义对象成员指针，则每个成员会占用4个基本内存单元
	 */


	/*练习*/
	Line* p = new Line(10, 20, 30, 40);
	p->printInfo();
	delete p;
	p = NULL;
	
	cout << sizeof(p) << endl; //sizeof(p)：查看p的大小（使用基本内存单元的大小）
	cout << sizeof(Line) << endl;
	/*注：此编译结果在32位的环境下是4和8，在64位环境下的编译结果为8和16*/
	system("pause");
	return 0;
}
