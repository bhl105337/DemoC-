#include "pch.h"
#include <iostream>
#include <string>
#include "Whorker.h"

using namespace std;

/*例一*/
// class Person
// {
// 	// 人类
// public:
// 	void eat(); // 吃饭
// 	string m_strName; // 名字
// 	int m_iAge; // 年龄
// };

// class Whorker
// {
// 	// 工人类（人类的一种）
// public:
// 	void eat();// 吃饭
// 	void work();// 工作
// 	string m_strName;// 名字
// 	int m_iAge;// 工作
// 	int m_iSalary;// 工资
// };
/*
 * 观察：人类的代码特征和工人类的代码特征有着相当的相同部分
 * 思考：这样的情况下能不能让两者产生某种关系，从而在定义人类的时候减少重复代码的编写，尽情程序员的工作
 * 前提：工人类被包含在人类里面
 */

// class Whorker : public Person
// {
// 	/*
// 	 * class Whorker : public Person
// 	 * public继承方式 Person类名
// 	 */
// public:
// 	void work(); // 工作
// 	int m_iSalary; // 工资
// };
/*
 * 当工人类和人类发生这样的关系之后，工人类就是人类的派生类（Whorker），人类是工人类的基类（Person）
 * 或者子类（Whorker）或父类（Person）
 * 概念 基类<=>父类，派生类<=>子类
 */


/* 例二
 * 练习
 * 要求
 * 定义Person类
 *	数据成员：m_strName，m_iAge
 *	构造函数，析构函数，eat函数
 * 
 * 定义Whorker类
 *	要求继承Person类
 *	数据成员：m_iSalary
 *	构造函数，析构函数，work()函数
 *
 *参考Person.h，Person.cpp，Whorker.h，Whorker.cpp
 */

int main()
{
	// 什么是继承
	// 生活中的继承
	// c++中的继承不等于生活中的继承
	/* 思考
	 * C++的继承是什么概念
	 * 为什么要在c语言中设置继承这种关系
	 * 参考例一
	 */


	/*
	 * 在内存中的对象来说，子类和父类是怎样的关系
	 * 参考例二
	 */
	Whorker* p = new Whorker;
	p->m_strName = "Jim";
	p->m_iAge = 200;
	p->eat();

	p->m_iSalary = 5000;
	p->work();

	delete p;
	p = NULL;
	/*
	 * 可以看到，在继承关系中，实例化一个子类，必先实例化父类
	 * 在子类获得父类的结构后，在实例化子类
	 * 在内存释放时，也先释放子类，在释放父类
	 * */
	system("pause");
	return 0;
}
