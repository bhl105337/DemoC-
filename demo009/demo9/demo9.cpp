#include "pch.h"
#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;

// 对象中数据是如何存储的
// 栗子：
// 定义类，在实例化前不会占用堆或者栈的内存
class Car
{
public:
	int getWheelCount() { return wheelCount; }
private:
	int wheelCount;
};

/*
 * 初始化坦克类
 */
class Tank
{
public:
	void init() //初始化
	{
		m_iPosX = 0;
		m_iPosY = 0;
	}

private:
	int m_iPosX;
	int m_iPosY;
};


// 无参构造函数
class Student
{
public:
	Student() { m_strName = "jim"; }; //构造函数Student()与类名相同，Student()前面没有任何返回值，函数中初始化成员函数
private:
	string m_strName;
};


// 有参构造函数
class Student1
{
public:
	Student1(string name) { m_strName = name; }; //初始化
private:
	string m_strName;
};


// 有参构造函数
class Student2
{
public:
	Student2() { m_strName = "jim"; };
	Student2(string name) { m_strName = name; }; //重载构造函数，参数类型和参数个数不同
private:
	string m_strName;
};


// 练习**********************
/**************
 *说明构造函数：teacher类
 *	自定义无参构造
 *	自定义有参构造函数
 *数据
 *	名字
 *	年龄
 *成员数据：
 *	数据成员的封装函数
 */
// 参考Teacher.h和Teacher.cpp


int main()
{
	// 对象的结构
	// 思考：实例化的对象是如何在内存中存储的
	// 思考：类中的代码又是如何存储的
	// 代码和数据有怎样的关系

	// 内存分区
	// 栈区：int x = 0; int *p = NULL;
	// 堆区：int *p = new int[20];
	// 全局区：储存全局变量以及静态变量
	// 常量区：string str = "hello"
	// 代码区：储存编译之后逻辑代码的二进制


	// *********************
	//在实例化之后，如:
	// Car car1;
	// car1.getWheelCount();
	//
	// Car car2;
	// car2.getWheelCount();
	//
	// Car car3;
	// car3.getWheelCount();
	//实例化之后会分别开辟出多个不同的栈区内存，用来存储各自的数据，但是逻辑代码就只是编译出一份放在代码区（等于是公共调用），当需要时，可通过对应的入口调用对应的程序
	//但是未初始化的对象不可控，因此需要初始化


	// ********************************
	//对象初始化
	// Tank t1;
	// t1.init();
	//
	// Tank t2;
	// t2.init();

	// 初始化的类型
	// 只有一次的初始化
	// 根据条件初始化


	// 重点一，仅被调用一次的初始化
	// 思考：初始化函数如何避免误操作
	// 忘记调用初始化函数
	// 重复调用初始化函数
	// 为了避免以上的情况发生，因此使用构造函数
	// 特点：在对象实例化时被自动调用，通长只需将初始化的代码写在构造函数内，即可起到初始化的作用

	// 重点二，构造函数强调：
	// 构造函数在实例化对象时，被调用且仅被调用一次
	// 构造函数名与类名同名
	// 构造函数没有返回值，不需要写void的返回类型
	// 构造函数可以有多个重载形式，但是需要遵循重载的规则；
	// 实例化对象即便有多个构造函数，但也仅用到一个构造函数
	// 当用户没有定义构造函数时，编译器会自动生成一个构造函数，这构造函数里面没有做任何事情（很重要）


	// （1）无参构造函数

	// 练习**********************

	Teacher t1; //无参

	Teacher t2("李四", 66); //有参

	Teacher t3("王五"); //有参，有默认值


	cout << t1.getName() << "," << t1.getAge() << endl;
	cout << t2.getName() << "," << t2.getAge() << endl;
	cout << t3.getName() << "," << t3.getAge() << endl;

	return 0;
}
