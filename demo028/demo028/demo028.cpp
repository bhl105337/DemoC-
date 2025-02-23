#include "pch.h"
#include <iostream>
#include <string>
#include "MigrantWorker.h"

using namespace std;

/* 虚继承
 * 练习要求
 * 1、Farmer
 * 数据成员：m_sName
 * 成员函数：构造，析构，sow()
 * 
 * 2、Worker
 * 数据成员：m_sCode
 * 成员函数：构造，析构，carry()
 * 
 * 3、MigrantWorker
 * 数据成员
 * 成员函数：构造，析构
 * 
 * 4、Person 
 * 数据成员：m_sColor
 * 成员函数：构造，析构，printColor()
 * 
 * 参考：
 * Farmer.h，Farmer.cpp
 * Worker.h，Worker.cpp
 * MigrantWorker.h，MigrantWorker.cpp
 * Person.h，Person.cpp
 */

int main()
{
	// 多继承和多重继承的烦恼
	/* 比方说A,B,C,D四个类
	 * B和C都继承了A，D继承了B和C的Is a的关系
	 * 这个关系称为零星继承
	 * 当实例化D时会发现D继承了B和C，而B和C都继承了A，这样的话D中将会有两个完全一样的A的数据
	 * 而这样的情况是不能允许的，这样回产生过多的冗余数据
	 * 
	 * 为了解决这个问题，就需要用到虚继承
	 * 虚继承是一种继承方式，关键字是virtual，
	 * 例子
	 * class Worker : virtual public Person {}
	 * 工人类继承了人类，而工人类也将会被农民工继承，就会把工人类称为虚基类
	 * class Farmer : virtual public Person {}
	 * 农民类也同样
	 * 
	 * class MigrantWorker : public Worker,public Farmer{}
	 * 在实例化农民工类时，在当中就只含有一份Person的数据
	 */

	/*
	 * 编写好后直接运行，会报错提示Person重定义，即在当前的工程当中Person被定义了多次
	 * 因为Worker和Farmer都引用了Person定义
	 * 解决办法：使用宏定义，参考Person.h
	 * 再次运行之后可以正常了
	 */

	MigrantWorker* p = new MigrantWorker("Ruby", "002", "yellow");

	p->Farmer::printColor();
	p->Worker::printColor();
	// p->printColor();

	delete p;
	p = NULL;

	/* 运行可知，在没有虚继承的情况下，实例化会实例化两次Person，在执行析构函数是也会销毁两次Person
	 *
	 */

	system("pause");
	return 0;
}
