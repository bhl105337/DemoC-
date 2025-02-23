#include "pch.h"
#include <iostream>
#include <string>

#include "Infantryman.h"

using namespace std;

// 例一
// class Person
// {// 人类
// };
//
// class Soldier : public Person
// {// 士兵
// };
//
// class Infantryman : public Soldier
// {// 步兵
// };
//
// // 例二
// class Worker
// {// 工人
// };
//
// class Farmar
// {// 农民
// };
//
// class MigrentWorker : public Worker, public Farmar
// {// 农民工
// };

/* 练习 
 * 多重继承
 * 要求：
 * 1、Person类
 * 数据成员：m_sName
 * 成员函数：构造，析构，play()
 * 
 * 2、Soldier类
 * 数据成员：m_iAge
 * 成员函数：构造，析构，work()
 * 
 * 3、Infantryman类
 * 数据成员：无
 * 成员函数：构造，析构，attack()
 * 
 * 4、定义函数test1(Person p)、test2(Person &p)、test3(Person *p)
 * 
 * 参考：
 * Person.h，Person.cpp
 * Soldier.h，Soldier.cpp
 * Infantryman.h，Infantryman.cpp
 */

void test1(Person p)
{
	p.play();
}

void test2(Person& p)
{
	p.play();
}

void test3(Person* p)
{
	p->play();
}

int main()
{
	/* 多继承和多重继承 */
	/* 多重继承
	 * 人类->士兵类->步兵类
	 * 如果在继承的时候都适用public的继承方式，那么也存在着Is a的关系
	 * 即士兵是人，步兵是士兵，步兵也是人
	 * 参考例一
	 * 即Infantryman既继承了Soldier的成员也继承Person成员
	 */

	/* 多继承
	 * 假设一个类为农民工类，既继承了工人类，又继承了农民类，但是工人类和农民类却是没有关联
	 * 即一个子类，同时拥有两个父类
	 * 如果是以public的方式继承，那么也会存在这样的关系：
	 * 农民工是工人
	 * 农民工是农民
	 * 但两者关系并不橡胶，是平行的两个关系
	 * 参考例二
	 * 注：继承方式也要写出来，否在系统会默认private方式继承
	 */

	/* 练习：多重继承 */
	Infantryman inMan;
	/* 执行顺序为：Person=>Soldier=>Infantryman 
	 * 因为在实例化自己时，要先实例化父级的构造函数
	 * 析构函数则反过来
	 */
	/* 证明：子类对象可以作为参数传入 */

	test1(inMan);
	test2(inMan);
	test3(&inMan);
	/* 结果：无论继承多少层，子类都可以调用直接父类，或者间接父类的Is  a的关系，并且通过指针对直接子类或简介子类做相应的操作 */


	system("pause");
	return 0;
}
