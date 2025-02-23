#include "pch.h"
#include <iostream>
#include <string>
#include "Worker.h"
//#include "Person.h"

using namespace std;

/*例一*/
//class Person {
//public:
//    void eat();
//
//    string m_sName;
//    int m_iAge;
//};
//
//class Worker : public Person {
//public:
////    void eat();
//
//    void work();
//
////    string m_sName;
////    int m_iAge;
//    int m_iSalary;
//
//    /*
//     * 被注释的三个成员是已经继承了Person类的对象结构，实际上不用写出来
//     */
//};

/*例二*/
/*未改造*/
// class Person
// {
// public:
// 	void eat();
//
// protected:
// 	int m_iAge;
// private:
// 	string m_sName;
// };

// void Person::eat()
// {
// 	//在这种情况下是允许正常访问的
// 	m_sName = "Jim";
// 	m_iAge = 10;
// }

/*改造后，公有继承方式*/
// class Person
// {
// public:
// 	void eat();
//
// protected:
// 	string m_sName;
// 	int m_iAge;
// };
//
// class Worker : public Person
// {
// public:
// 	//    void  eat()
// 	void work() { m_iAge = 20; }
// protected:
// 	// string m_sName;
// 	// int m_iAge;
// 	int m_iSalary;
// };

/* 在使用protected访问限定符时，继承时在子类对象里面也写入protected，即可继承父类protected里的内容 */

/*例三，公有继承方式*/
// class Person {
// public:
//     void eat();
//
// private:
//     string m_sName;
//     int m_iAge;
// };
//
// class Worker : public Person {
// public:
//     // void  eat()
//     // void work() { m_iAge = 20; }//因为Person的数据成员在不可见位置，所以在使用private时，此时程序是被禁止的
// private:
//     // string m_sName;
//     // int m_iAge;
//     int m_iSalary;
//
//     /* Person里的private继承到了Worker的private里的不可见位置 */
// };

/*练习
 * 要求：继承方式为公有继承
 * 1、定义Person类
 * 数据成员；m_sName，m_iAge
 * 成员函数：构造，析构，eat函数
 *
 * 2、定义Worker类
 * 公有继承Person类
 * 成员数据：m_iSalary
 * 成员函数：构造，析构，work函数
 *
 * 参考Person.h，Person.cpp，Worker.h，Worker.cpp
 */


//********************
int main() {
    //    继承方式 三种继承方式
    //    公有继承 class A:public B
    //    保护继承 class A:protected B
    //    私有继承 class A:private B

    /*公有继承 public*/
    // 回忆：参考例一
    //    Worker work;
    //    work.m_sName = "Jim";
    //    work.eat();
    // 在继承之后，Worker可以调用基类的数据成员，以及成员函数

    /*保护继承 protected*/
    // 参考例二
    /*
     * protected在一般情况下与public的性质是相同的（不涉及继承的情况下）
     * protected在设计继承的时候，才会显示其特点
     */

    // Person per;
    // per.eat();
    //    per.m_iAge = 20;
    //    per.m_sName = "Jim";
    //    在调用这两个数据成员时是错误的，因为该数据成员并不是处在public下

    /* 在public方式继承下，读取protected和private，参考例三 */

    /*练习:公有继承*/

    //从堆中实例化
//    Worker *w = new Worker();
//    w->m_sName = "Jim";
//    w->m_iAge = 30;
//    w->eat();
//    w->work();
//    w->m_iSalary = 5000;
//
//    delete w;
//    w = NULL;

    //从栈中实例化
    Worker work;
//    work.m_sName = "Jim";
//    work.m_iAge = 30;
//    work.eat();
    work.work();
//    work.m_iSalary = 16000;

/*实验二*/
//    Person p2;
//	p2.eat();
    /** 思考：
     * 此时可以正常访问，因为eat是在public下
     * 但是，在eat下访问protected和private的数据是否允许。
     * 运行前，先把Worker.h注释
     * 运行结果证明，在protected和private下边定义的数据成员，在他的成员函数当中访问的等价的
     *
     * 但是，实例化后直接访问protected和private下的数据成员是不允许的
     * 即公有继承之后，父类的私有资源虽然被子类继承但是无法直接调用
     * */




    system("pause");
    return 0;
}
