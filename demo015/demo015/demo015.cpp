#include "pch.h"
#include <iostream>
#include <string>
#include "Coordinate.h";


using namespace std;

/*例子*/
// class Coordinate
// {
// public:
// 	int m_iX;
// 	int m_iY;
// };

/*练习
 * 要求：
 *	定义Coordinate类
 *	数据成员：m_iX，m_iY
 *	声明对象指针，并通过指针操纵对象
 *	
 *	计算两个点，横，纵坐标的和(横坐标点的两个值相加，纵坐标点的值相加)
 *	参考Coordinate.h和Coordinate.cpp
 */

int main()
{
	//对象指针：通过指针指向对象

	// Coordinate* a = new Coordinate; //以堆的方式实例化类（对象）
	// // 重点：指针p与对象Coordinate在内存当中的相关位置，和关系
	// // 在使用堆的方式实例化后，就会在内存分配出一个空间，当中存储了m_iX，m_iY
	// a->m_iX = 10; // (*a).m_iX = 10;
	// a->m_iY = 20; // (*a).m_iY = 20;
	// //访问方式
	// delete a;
	// a = NULL;

	/*Coordinate* p1 = NULL;
	p1 = new Coordinate;

	Coordinate* p2 = new Coordinate();

	p1->m_iX = 10;
	p1->m_iY = 20;

	(*p2).m_iX = 30;
	(*p2).m_iY = 40;

	cout << p1->m_iX + (*p2).m_iX << endl;
	cout << p1->m_iY + (*p2).m_iY << endl;

	cout << (*p1).m_iX + p2->m_iX << endl;
	cout << (*p1).m_iY + p2->m_iY << endl;
	delete p1;
	p1 = NULL;
	delete p2;
	p2 = NULL;*/
	/*四种写法都可以*/

	/*从栈中实例化*/

	Coordinate p1;
	Coordinate* p2 = &p1;

	p2->m_iX = 10;
	p2->m_iY = 20;

	cout << p1.m_iX << endl;
	cout << p1.m_iY << endl;

	return 0;
}
