#include "pch.h"
#include <iostream>
#include <string>
#include "Soldier.h"

using namespace std;

/* 例二 */
//void fun1(Person *p) {
//    //指针对象
//}
//
//void fun2(Person &p) {
//    //传入引用
//}

/**练习
 * 公有继承Is a
 * 要求：
 *      Person类
 *      数据成员：m_strName
 *      成员函数：构造、析构、play()
 *
 *      Soldier类
 *      数据成员：m_iAge
 *      成员函数，构造、析构、work()
 *
 *      定义函数test1(Person p)、test2(Person &p)、test3(Person *p)
 *
 *      参考Person.h  Person.cpp  Soldier.h  Soldier.cpp
 */
/*例三*/
void test1(Person p)
{
	/* 通过运行得知，因为参数是对象p 
	 * 在传值接收的时候，会先实例化一个临时对象p，通过临时对象p来调用类的函数
	 * 并在执行完毕之后p就会被销毁
	 * 因此会出现两次销毁的打印
	 */
	p.play();
}

void test2(Person& p)
{
	/* 因为参数是别名，此时并没有实例化临时对象，是通过别名p来调用函数，因此也就没有销毁临时对象的痕迹 */
	p.play();
}

void test3(Person* p)
{
	/* 根据结果可以发现，和test2的结果一样，因为参数是指针，函数是通过指针*p来调用的 */
	p->play();
}


int main(void)
{
	/**概念
	 * Is...a
	 * 比喻，隐形眼镜也是眼镜，眼镜是基类，那么隐形眼镜就是派生类
	 * 对于任何一个隐形眼镜来说，都可以称之为眼镜，而这样个关系叫Is...a
	 */
	//例一
	//    Soldier s1;//实例化士兵类对象
	//    Person p1 = s1;//用士兵去初始化人类对象
	//    Person *p2 = &s1;//定义人类指针指向士兵
	//    /* 以上写法是正确的 */
	//
	//    s1 = p1;//错误：将人赋值给士兵是错误的
	//    Soldier *s2 = &p1;//错误：定义士兵指向人类也是错误的
	/* 即：在正确的写法下，子类赋值给父类是可以的，也可用父类的指针指向子类的对象 */

	/**扩展
	 * 这样的情况下就可以用基类的指针、对象或者引用作为函数的参数，来使它可以接收和传入的派生类的对象，并且也可以传入基类的对象
	 * 参考例二
	 */
	/*例二*/
	//    Soldier s1;
	//    Person p1;
	//    fun1(&p1);
	//    fun2(p1);
	//    fun1(&s1);
	//    fun2(s1);

	/* 存储结构 */
	//    情况一：子类对象赋值给父类对象，或者子类对象初始化父类的变量，父类对象之证接收自己拥有的数据成员
	//    情况二：父类的指针指向子类对象，父类的指针只能够访问到，父类所拥有的数据成员，二无法访问子类所拥有的数据成员


	/* 练习 */
	// Soldier soldier;
	// Person person;
	/* 此时是分别使用Soldier和Person的默认构造函数 */
	// Person p = soldier;//把Soldier中的name赋值给了p的name
	// p.play();

	// Person person;
	// person.play();//此时打印出来的是Jim

	// person = soldier;
	// person.play();

	// Person* p = &soldier;
	// p->play();
	// p->work();//不能调用父级的成员
	/* 通过父类指针指向子类时，销毁的是执行父类的函数还是子类的函数 */

	// Person* p = new Soldier();
	//
	// p->play();
	//
	// delete p;
	// p = NULL;
	/* 通过运行可知
	 * 调用时先调用父类的构造函数，再调用子类的构造函数
	 * 但是当销毁内存时，却发现，只执行了父类的析构函数子类的析构函数没有执行，有可能造成内存的泄漏
	 * 避免办法：
	 * 虚析构函数
	 * 使用条件：当存在继承关系时，使用父类的指针，指向堆中的子类对象，并且还想使用父类的释放内存
	 * 在析构函数前面使用关键字virtual修饰，virtual也可以被继承
	 * 只要在父级写入virtual，那么在子类的析构函数即使不写virtual，子类的析构函数也是虚析构函数，但是建议都写上
	 */


	/* Is a的关系在公有继承中，参数传递的实现
	 * 参考例三 
	 */

	Person p;
	Soldier s;

	// test1(p);
	// test1(s);
	// test2(p);
	// test2(s);
	test3(&p);
	test3(&s);

	/* 结果：
	 * 通过三个test的运行结果发现，使用test2和test3不会产生新的临时变量（对象），在效率上比test1更高
	 */


	system("pause");
	return 0;
}
