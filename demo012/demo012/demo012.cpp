#include "pch.h"
#include <iostream>
#include <string>
#include "Coordinate.h"

using namespace std;

// class Coordinate
// {
// public:
// 	int m_iX;
// 	int m_iY;
// };

/*练习
 *要求
 *	定义Coordinate类
 *	数据成员m_iX、m_iY
 *	分别从栈和堆中实例化长度为3的对象数组
 *	给数组中的元素分别赋值
 *	遍历两个数组
 *
 * 参考Coordinate.h和Coordinate.cpp
 */


int main()
{
	//对象数组定义
	// 方式一
	// Coordinate coor[3]; //类名 名称（别名）[数组中的元素个数]
	// coor[1].m_iX = 10;
	//
	// // 方式二
	// Coordinate* p = new Coordinate[3];
	// p[0].m_iY = 20;
	// p->m_iY = 20;
	// delete[]p;
	// p = NULL;

	Coordinate coor[3];
	coor[0].m_iX = 10;
	coor[0].m_iY = 10;

	for (int i = 0; i < 3; i++)
	{
		cout << "c_x" << coor[i].m_iX << endl;
		cout << "c_y" << coor[i].m_iY << endl;
	}


	Coordinate* p = new Coordinate[3];
	p->m_iX = 20; //直接访问数组中第一个元素的值
	p[0].m_iY = 20;

	p++; //指针p++->m_iX会自动访问第二个元素，与p = p+1或p+=1同等
	p->m_iX = 50;
	p[0].m_iY = 20; //因为此时p的位置是第二个元素，所以p[0]也是处在第二个元素，无法访问第一个元素

	p[1].m_iX = 50; //因为上面的p++处于第二个元素，此时的p[1]则等于是第三个元素
	p++; //可以再次p++，此时p处在第三个位置
	p->m_iY = 70;

	for (int j = 0; j < 3; j++)
	{
		// 未经过p++的情况
		// cout << "cj_x" << p[j].m_iX << endl;
		// cout << "cj_y" << p[j].m_iY << endl;

		// 经过p++的情况
		cout << "cj_x" << p->m_iX << endl;
		cout << "cj_y" << p->m_iY << endl;
		p--; // 但是在第一次循环时，所指向的是第三个元素，因此需要p--循环倒退
	}
	p++;
	delete[]p;
	p = NULL;
	// 循环完结之后需要释放内存，但是此时的内存与之前申请的内存不是同一段，无法直接使用delete[]p来完成释放,需要一次p++将指针指回到请求的内存
	// 解释：delete释放时为什么要加[]号
	// 当实例化一个数组时，实际上数组中的每一个函数都执行了构造函数，在销毁的时候也希望每一个对象都执行析构函数来完成交互
	// 如果不加中括号[]，则销毁的时候只会销毁第一个元素，会造成内存的泄漏


	system("pause");
	return 0;
}
