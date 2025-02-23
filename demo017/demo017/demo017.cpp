#include "pch.h"
#include <iostream>
#include <string>
#include "Array.h"

using namespace std;

/*例一*/
// class Array
// {
// public:
// 	Array(int _len) { len = _len; }//有参构造函数
// 	/*成员函数*/
// 	int getLen() { return len; }
// 	void setLen(int _len) { len = _len; }
// 	
// private:
// 	int len;
// };

/*例二*/
// class Array
// {
// public:
// 	Array(int len) { len = len; } //有参构造函数
// 	/*成员函数*/
// 	int getLen() { return len; }
// 	void setLen(int len) { len = len; }
//
// private:
// 	int len;
// };

/*例三*/
// class Array
// {
// public:
// 	Array(int len) { this->len = len; }
// 	int getLen() { return len; }
// 	void setLen(int len) { this->len = len; }
// 	/* 流程
// 	 * 如果想用与数据成员同名的参数，那么在数据成员前面可以加入this->指明数据成员
// 	 */
// private:
// 	int len;
// };

/*例四回顾*/
// class Car
// {
// public:
// 	int getWheelCount() { return wheelCount; }
// private:
// 	int wheelCount;
// };

/*例五*/
// class Array
// {
// public:
// 	Array(T*this, int _len)
// 	{
// 		this->len = _len;
// 	}
//
// 	int getLen(T*this)
// 	{
// 		return this->len;
// 	}
// 	void setLen(T*this, int _len)
// 	{
// 		this->len = _len;
// 	}
//
// private:
// 	int len;
// };

/*this指针实践*/
/* 要求
 * 定义一个Array类
 * 数据成员m_iLen
 * 成员函数
 *	构造函数
 *	析构函数
 *	len封装函数
 *	信息输出函数printInfo
 */


int main()
{
	//this指针
	/*回忆：在过去的例子中对象里面函数传递的参数名与数据成员均是不同，参考例一*/
	/* 思考：参数与数据成员同名会怎样，参考例二
	 * 后果：在这种情况下，计算机会无法分辨是参数赋值给成员或是成员赋值给参数，会导致编译出错
	 * 目的：针对以上问题，需要一个新的技术，可以区分出参数与数据成员的区别，因此需要使用this指针
	 */
	// this指针的定义：即指向自身数据的指针
	// 如果使用实例化Array arr1，this就相当于给arr1取地址，this <=> &arr1
	// 如果再次实例化Array arr2，this <=> &arr2
	// 注：this要表达什么意思，取决于放在哪里，如放在arr1里面那么this就是arr1的地址,即可访问arr1的数据成员，arr2同理，参考例三


	/* 回到例一
	 * 思考：成员函数中直接访问数据成员这个做法，的意义，或者说是否对其有怀疑
	 */
	// 当分别定义car1，car2，car3
	/* Car car1;
	 * Car car2;
	 * Car car3;
	 * car1就会有自己的数据成员wheelCount
	 * car2就会有自己的数据成员wheelCount
	 * car3就会有自己的数据成员wheelCount
	 * 
	 * 但是成员的函数就只有一份存放在代码区内getWheelCount()，在car1，car2，car3分贝调用成员函数时，都可以访问代码区中的成员函数
	 * 而在访问的时候也不会出任何的问题，在成员函数在被调用时也调用到了每个对象的数据成员，并且没有出现混乱
	 * 
	 * 
	 * 发现与思考：
	 * 1、既然函数的逻辑代码都是以二进制的方式存储在代码区内，参数中也没有数据成员，那么在调用数据成员时为什么会成功
	 * 2、当存在多个对象时，函数又如何确定该调用那个对象的数据成员（成员函数如何访问到对应的数据成员）*****重点
	 * 3、参考例五，解决疑问
	 */
	/*例五流程*/
	//Array arr1(this, 10); => len=10 => this->len=10
	//arr1.getLen(this); => return len => return this->len

	//Array arr2(this, 20); => len=20 => this->len=20
	//arr2.setLen(this, 30); => len=30 => this->len=30

	/* 说明
	 * 当arr1实例化时this会指向当前的对象的数据成员（arr1），传入的参数对len的操作，实际上就是arr1的len
	 * 当arr2实例化时this会指向当前的对象的数据成员（arr2），传入的参数对len的操作，实际上就是arr2的len
	 * 
	 * 也是因为每次调用都需要this指针，因此c++编译时默认情况下是直接每一个成员函数的参数列表增加了this指针，所以最后摆在面前的成员函数的样子，参考例一
	 */

	/*
	 * 思考：this指针在参数列表的什么位置上，是第一个位置或是最后一个位置，为什么会这样顺利
	 */


	/*练习*/
	Array arr1(10);
	// cout << arr1.getLen() << endl;
	// arr1.printInfo(); //因为，在printInfo最后返回了*this（对象），arr1.printInfo()等于是一个对象，可以使用以下写法
	// arr1.printInfo().setLen(50);//改造方式1
	// arr1.printInfo()->setLen(50);
	arr1.printInfo();
	// cout << "len=" << arr1.getLen() << endl;
	cout << &arr1 << endl;
	// 此写法虽然无误，但是还不能改变arr1的值
	// 因为在最后虽然返回了*this，但是返回的对象是一个新的对象，一个临时的对象
	// 如果想要是arr1，那么在array.h里面的改变为Array& printInfo();，array.cpp里面改变为Array& Array::printInfo(){}
	// 提醒：如果对setLen改造的话也可以在setLen()后面加“.”号


	system("pause");
	return 0;
}
