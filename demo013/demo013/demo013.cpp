#include "pch.h"
#include <iostream>
#include <string>
#include "Line.h"

using namespace std;

// 例子：以坐标系为例
// A点2，1  B点6，4
/*
class Coordinate
{
	//定义点标点类
public:
	// Coordinate();
	Coordinate(int x, int y);
private:
	int m_iX;
	int m_iY;
};

class Line
{
	//定义线的类
public:
	Line(int x1, int y1, int x2, int y2);

	// Line();
private:
	Coordinate m_coorA; //起点
	Coordinate m_coorB; //终点
};

Line::Line(int x1, int y1, int x2, int y2) : m_coorA(x1, y1), m_coorB(x2, y2)
{
	cout << "line" << endl;
}
*/

/*
 * 练习
 * 要求：定义两个类
 * 坐标类：Coordinate
 * 数据成员：横m_iX，纵m_iY
 * 成员函数：构造函数，析构函数，数据封装函数
 * 
 * 线段类：Line 
 * 数据成员：点A m_coorA，点B m_coorB
 * 成员函数：构造函数，析构函数，数据封装函数
 */

//参考Coordinate.h、Coordinate.cpp、Line.h、Line.cpp

int main()
{
	//对象成员

	/*实例化坐标系类*/
	// 思考：
	//（1）当进行实例化时是先实例化线段，还是先实例化作为对象成员的左边对象。
	//（2）当delete销毁时销毁的顺序又是怎样的

	// 结论：
	// 实例化时会先实例化坐标点先是m_coorA，其次m_coorB，最后是Line对象
	// 销毁对象时销毁顺序则与创建对象相反Line->m_coorB->m_coorA

	// 注：对象作为数据成员的情况中，构造函数都是没有参数的
	// 坐标类的构造函数需要有参数（就是，作为一条线段，两点的坐标是可以由调用者确定的），即在line实例化时通过给构造参数传参，从而使两个点生成在确定的位置上
	// Line* p = new Line(2,1,6,4);//即便能传参数，但是此写法也是错误的，因此需要初始化列表

	// Line* p = new Line();
	// Line* p = new Line(2, 1, 6, 4); //初始化列表之后可以使用这个方法
	//
	// delete p;
	// p = NULL;


	/*练习*/
	// Line* p = new Line; //因为Line有一个默认构造函数，所以，也可以写成Line()
	Line* p = new Line(1, 2, 3, 4);

	p->printInfo();
	delete p;
	p = NULL;

	/*流程*/
	// 1、先创建了两个坐标类的对象，即A点和B点
	// 2、调用线段类对象，是在A点和B点创建完成后调用
	// 3、在销毁的时候，先调用线段的析构函数，然后在调用两个坐标点的析构函数

	/*目的*/
	//作为线段来说，希望在线段创建的时候就已经将里面的两个点确定下来，因此需要线段类的构造函数带有参数，并且参数能传递给两个点

	/*注
	 * 如果坐标类有一个默认构造函数（没有参数）的前提，就可以在实例化线段对象时，不使用初始化列表
	 */

	system("pause");
	return 0;
}
