#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

/*例一*/
class Coordinate
{
public:
	Coordinate(int x, int y);
	int getX();
	int getY();
	// int getX() const;
	// int getY() const;
	void printInfo() const; //常成员函数
private:
	int m_iX;
	int m_iY;
};

int Coordinate::getX()
{
}

int Coordinate::getY()
{
}

// int Coordinate::getX() const
// {
// }
//
// int Coordinate::getY() const
// {
// }

void Coordinate::printInfo() const
{
	cout << "(" << m_iX << "," << m_iY << ")" << endl;
}


int main()
{
	/* 对象指针与对象引用的相关知识 */

	// 对象的引用与对象指针，参考例一
	// Coordinate coor1(1, 2);
	// Coordinate& coor2 = coor1;//实例化之后为coor1起别名coor2，即定义一个引用，引用的名字就是coor2
	// Coordinate* pCoor = &coor1;//实例化之后为coor1定义一个指针*pCoor，并指向coor1
	/* 注意
	 * 在给对象定义引用时可以直接引用名字，
	 * 但是给对象定义指针时，在对象前面要加入&号即&coor1
	 */
	// coor1.printInfo();
	// coor2.printInfo();
	// pCoor->printInfo();

	/* 对象的常指针和常引用 */
	// const Coordinate& coor2 = coor1;
	// const Coordinate* pCoor = &coor1;
	//
	// coor1.printInfo();
	// coor2.getX();
	// pCoor->getY();

	Coordinate coor1(1, 3);
	Coordinate coor2(2, 4);
	Coordinate*const pCoor = &coor1;//这个写法，是说明这个指针指向这个对象之后就不能指向其他的对象了

	pCoor->getY();
	// pCoor = coor2;//错误，因为指针已经指向了coor1,不能再指向其他的对象
	pCoor->printInfo();
	/* 第一点和第三点是正确的，因为虽然不能改变指针的对象，但是对象里面额内容是可变的 */

	system("pause");
	return 0;
}
