#include "pch.h"
#include <iostream>
#include <string>
#include "MigrantWorker.h"

using namespace std;

/* 练习
 * 多继承
 * 要求：
 * 1、Farmer类
 * 数据成员：m_sName
 * 成员函数：构造，析构，sow()
 *
 * 2、Worker类
 * 数据成员：m_iAge
 * 成员函数：构造，析构，carry()
 *
 * 3、MigrantWorker类
 * 数据成员：无
 * 成员函数：构造，析构
 *
 * 4、定义函数test1(Person p)、test2(Person &p)、test3(Person *p)
 *
 * 参考：
 * Farmer.h，Farmer.cpp
 * Worker.h，Worker.cpp
 * MigrantWorker.h，MigrantWorker.cpp
 */


int main()
{
	/* 多继承练习 */

	MigrantWorker* p = new MigrantWorker("Ruby", "2B");

	p->sow();
	p->carry();

	delete p;
	p = NULL;

	system("pause");
	return 0;
}
