#include "pch.h"
#include <iostream>
#include <string>
#include "Circle.h";
#include "Rect.h"

using namespace std;

/* 例一 */
// class Rect
// {
// public:
// 	int calcArea(int width);
// 	int calcArea(int width, int height);
// 	// 此时，两个函数互为重载
// };

/* 例二 */
// class Shape
// {
// public:
// 	// double calcArea()
// 	virtual double calcArea() //虚函数
// 	{
// 		cout << "calcArea" << endl;
// 		return 0;
// 	}
// };
//
// class Circle : public Shape
// {
// public:
// 	Circle(double r); //构造函数
// 	virtual double calcArea(); //计算面积函数
// private:
// 	double m_dR;
// };
//
// double Circle::calcArea()
// {
// 	return 3.14 * m_dR * m_dR;
// }
//
//
// class Rect : public Shape
// {
// public:
// 	Rect(double width, double height);
// 	virtual double calcArea();
// private:
// 	double m_dWidth;
// 	double m_dHeight;
// };
//
// double Rect::calcArea()
// {
// 	return m_dWidth * m_dHeight;
// }

/* 动态多态、虚函数
 * 练习要求：
 * 1、Shape
 * 成员函数：构造，析构数，clacArea()
 * 
 * 2、Rect
 * 成员函数：构造，析构数，clacArea()
 * 数据成员：m_dWidth，m_dHeight
 * 
 * 3、Circle
 * 成员函数：构造，析构数，clacArea()
 * 数据成员：m_dR;
 * 
 * 参考
 * Shape.h，Shape.cpp
 * Circle.h，Circle.cpp
 * Rect.h，Rect.cpp
 */


int main()
{
	/* 学习前序
	 * 什么是多态
	 * 当发出一条命令后，不同的对象接收到同样的命令后，所作出的动作是不同的，这个情况称为多态
	 * 多态同样也是面向对象的三大特征之一 
	 * 其三大特征是，封装、继承、多态
	 * 
	 * 只是要点
	 * 普通虚函数和虚析构函数
	 * 纯虚函数，与之相关的有，抽象类，接口类
	 * RTTI的相关
	 * 异常处理
	 * 
	 * 注意概念
	 * 隐藏和覆盖的区分，以及与隐藏（过去的学习知识）的关系
	 * 早绑定和晚绑定
	 * 
	 * 核心：
	 * 虚函数表，同样也是c++实现多态的关键存在
	 */

	// 什么是多态
	// 书本定义：指相同对象，收到不同消息或者不同对象收到相同消息时产生的不同的动作
	/* 概念
	 * 静态多态、动态多态
	 */
	// 静态多态（早绑定），参考例一
	// Rect rect;
	// rect.calcArea(10);
	// rect.calcArea(10, 20);
	// 在编译时，自动调用对应参数的函数，即在编译时就已经确定是调用那个参数了
	// 这个情况就是早绑定

	/* 动态多态（晚绑定） 
	 * 假设：需要计算面积
	 * 给圆形下达了计算面积的指令，对矩形也下达计算面积的指令
	 * 而圆和矩形的计算方法都是不同的，这个情况就是动态多态（晚绑定）
	 * 对不同的对象，下达相同的的指令，却有着不同的操作
	 * 前提：
	 * 封装=>继承=>多态
	 * 封装和继承为基础
	 * 动态多态至少要有两个类，子类和父类
	 * 
	 * 参考例二
	 */

	// Shape* shape1 = new Circle(4.0);
	// Shape* shape2 = new Rect(3.0, 5.0);
	//
	// shape1->calcArea();
	// shape2->calcArea();
	//
	// delete shape1;
	// delete shape2;
	//
	// shape1 = NULL;
	// shape2 = NULL;
	/* 但是在运行后发现，指挥打印出两行“calcArea”的字符，不是想要的东西
	 * 解决办法：需要使用虚函数 virtual 修饰成员函数,再运行
	 */

	/* 练习 */
	Shape* shape1 = new Rect(3, 6);
	Shape* shape2 = new Circle(5.6);

	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	delete shape2;

	shape1 = NULL;
	shape2 = NULL;

	/* 重点 
	 * 通过运行得知，程序只是访问了父级Shape的函数，因此需要在Shape的calcArea前面加上virtual
	 * 再次运行后可看到可以调用Rect和Circle的calcArea函数
	 */

	system("pause");
	return 0;
}
