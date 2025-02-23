#include "pch.h"
#include <iostream>
#include <string>
#include "Line.h"

using namespace std;

// 例一
// class Coordinate
// {
// public:
// 	Coordinate(int x, int y);
// private:
// 	const int m_iX;
// 	const int m_iY;
// };

// 错误的初始化
// Coordinate::Coordinate(int x, int y)
// {
// 	m_iX = x;
// 	m_iY = y
// }

// 正确的初始化
// Coordinate::Coordinate(int x, int y): m_iX(x), m_iY(y)
// {
// }


// 例二
// 以线段为例，两个点一旦确定坐标，那么就不允许再进行更改

// class Line
// {
// public:
// 	Line(int x1, int y1, int x2, int y2);
// private:
// 	const Coordinate m_coorA;
// 	const Coordinate m_coorB;
// 	/* 为了实现坐标点确定后不再更改，因此加入const修饰为常对象 */
// };
//
// /*这种情况下，初始化必须要用初始化列表*/
// Line::Line(int x1, int y1, int x2, int y2): m_coorA(x1, y1), m_coorB(x2, y2)
// {
// 	cout << "line" << endl;
// }


//例三
// class Coordinate
// {
// public:
// 	Coordinate(int x, int y);
// 	void changeX() const; //常成员函数
// 	void changeX();
// 	// 这两个相同的成员函数写法，叫互为重载，语法能写，但是不建议这样子做
// 	// 在通常调用下会优先调用普通的成员函数/
// 	// 若是想要调用被const修饰的成员函数，那么就必须要在实例化时加入const修饰
// private:
// 	const int m_iX;
// 	const int m_iY;
// };


/*错误写法*/
// void Coordinate::changeX() const//常成员函数
// {
// 	m_iX = 10;
// }
// 可解析为
// void changeX(const Coordinate* this)
// {
// 	this->m_iX = 10;
// }
// 此时传递的参数中有一个隐藏的this指针，指向Coordinate，但是这个this指针使用了const修饰，变成了常指针，通过该指针去改变对象的数据是不被允许的


/*正确写法*/
// void Coordinate::changeX()
// {
// 	m_iX = 20;
// }
// 这个写法可以解析为
// void changeX(Coordinate* this)
// {
// 	this->m_iX = 10;
// }

/* 练习
 * 要求
 * 定义类Coordinate：
 * 成员函数：横坐标m_iX,纵坐标m_iY
 * 成员函数：构造函数，析构函数，数据封装函数
 * 
 * 定义类Line
 * 数据成员：点A m_coorA，点B m_coorB
 * 成员函数：构造函数，析构函数，数据封装函数，信息打印函数
 * 
 * 参考Coordinate.h，Coordinate.cpp，Line.h，Line.cpp
 */

int main()
{
	/*const重出江湖*/
	// 回忆：参考例一
	/* 
	 * 思考：如果对象成员用const修饰，是否可以
	 * 答案是可以的，被称为常对象成员
	 */

	// 常对象成员例子，参考例二
	// 初始化
	// Line* pLine = new Line(2, 1, 6, 4);
	// delete pLine;
	// pLine = NULL;


	// 常成员函数，参考例三
	// 为什么在常成员函数中不能修改数据成员的值

	// 在互为重载情况下，此调用会优先调用普通成员函数
	// Coordinate coordinate(3, 5);
	// coordinate.changeX();

	// 在互为重载情况下，调用被const修饰的成员函数
	// const Coordinate coordinate(3, 5);//先实例化为常对象
	// coordinate.changeX();//通过常对象


	// Line* p = new Line(1, 2, 3, 4);
	// Line line(1, 2, 3, 4);//调用普通成员函数
	const Line line(1, 2, 3, 4);//调用常成员函数

	line.printInfo();

	system("pause");
	return 0;
}
