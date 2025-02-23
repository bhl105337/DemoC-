#include "pch.h"
#include <iostream>
#include <string>
#include "Soldier.h"
// #include "Infantry.h"

using namespace std;

/*例子*/
//class Line {
//public:
//    Line(int x1, int y1, int x2, int y2)
//
//private:
//    Coordinate m_coorA;
//    Coordinate m_coorB;
//};

/*练习
 *  定义Person类
 *  数据成员：m_sName
 *  成员函数：构造函数，paly()
 *
 *  定义Soldier类
 *  数据成员m_iAge
 *  成员函数：构造函数，work()
 *
 *  定义Infantry类（步兵）
 *  成员函数：attack()
 *
 *  参考
 *  Person.h，Person.cpp
 *  Soldier.h，Soldier.cpp
 *  Infantry.h，Infantry.cpp
 * */

int main() {

    // 保护继承与私有继承
    /**
     * 回忆：三种继承方式
     * 重点：
     * 公有继承：在公有继承方式下，基类的public成员会继承到派生类的public中，protected同样继承到protected
     * 保护继承：在保护继承方式下，基类的public成员和protected成员都会集成到派生类的protected中
     * 私有继承：在私有继承方式下，基类的public成员和protected成员都会集成到派生类的private中
     * 三种继承方式，唯独private成员继承后都无法直接访问，同时以private私有继承最为特殊，参考例子
     */

    /**
     * 例子
     * 通过两个对象m_coorA和m_coorB，可发现Line只能够访问到，两个对象的公有数据成员和公有成员函数，与私有继承很相似
     * 因此把这种关系称为Has...a的关系，即线段当中有一个坐标，而这个关系是一种包含关系，在私有继承当中也是一种包含关系
     * 党定义一个子类对象时，子类对象就包含了一个父类对象，因为子类对象只能访问父类对象当中公有的数据成员和成员函数
     * 从本质上来说私有继承也是一种Has...a的关系
     */

    /**练习*/

    /**公有继承*/
    // Soldier soldier;
    // soldier.work();
    // soldier.play();
//    在调用soldier里面work函数时，其实是间接访问了soldier的父类Person的数据成员
//    在公有继承当中，父类protected的数据成员会被继承到子类protected的里面，public同理

//    保护继承
//    能够访问自己的work()，但是不能访问父类的play()
    // soldier.work();

    /**
     * 证明：
     * 理论：当保护继承之后，父类中的public的成员和protected的成员都继承到子类的protected中
     * 如何证实
     * 需要使用Infantry类说明
     * 如果使用public继承Soldier，那么就可以使用attack去访问Person的数据成员和成员函数
     */
     // Infantry infantry;
     // infantry.attack();

     // 私有继承
     // 当Soldier的继承方式改为private后，

    system("pause");
    return 0;
}


