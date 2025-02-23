#include "pch.h"
#include <iostream>
#include  <string>
#include "Teacher.h"

using namespace std;

class Student
{
public:
	Student() : m_strName("Jim"), m_intAge(10) // 初始化列表写法
	{
	}

	// 注意：初始化列表先于构造函数执行，编辑器会先给初始化列表的成员赋值，再执行构造函数的代码
	// 初始化列表只能用于构造函数，否则会报错
	// 初始化列表可以同时初始化多个数据成员

private:
	string m_strName;
	int m_intAge;
};


// 思考：初始化列表的意义
// 初始化列表的必要性
class Circle
{
public:
	// Circle() { m_dPi = 3.14; };// 会报错，因为已经是const常量，不能再赋值
	Circle() : m_dPi(3.14)
	{
	}; //通过初始化列表可以正常的赋值
private:
	const double m_dPi; //因为pi（圆周率）的值是不变的，通过const修饰后成为
};

// 练习**********************
/**************
 *说明构造函数：teacher类
 *	定义有参数默认构造函数
 *	使用初始化列表初始化数据
 *数据
 *	名字
 *	年龄
 *成员数据：
 *	数据成员的封装函数
 *扩展
 *	定义可以带多个学生的个数，此为常量
 */
// 参考Teacher.h和Teacher.cpp


// ****************************
// 拷贝构造函数
class Student2
{
public:
	Student2() { m_strName = "Jim"; }

	Student2(const Student2& stu)
	{
		// 拷贝构造函数写法

		// 将相应的代码写在此处实现，调用时就会实例化相应的例子
		// 如果没有自定义拷贝构造函数则系统会自动生成一个默认的拷贝构造函数
		// 当采用直接初始化或复制初始化实例化对象时，系统会自定调用拷贝构造函数

		// 总结
		// 构造函数的分类
		// <1>、无参构造函数->默认构造函数
		// <2>、有参构造函数
		//		<2.1>、有参数默认值（所有参数都带有默认值的话就是默认构造函数）
		//		<2.2>、无参数默认值
		// <3>、系统会自动洞生成构造函数
		//		<3.1>、普通构造函数（如果自定义了普通构造函数，则系统不会自定生成普通默认构造函数）
		//		<3.2>、拷贝构造函数（与3.1同理）
		//		<3.3>、初始化列表，作为初始化普通或者拷贝构造函数，有着不可取代的位置
	}

private:
	string m_strName;
};

// 练习：自定义拷贝构造函数
/*teacher类
 *	自定义拷贝构造函数
 *数据
 *	名字
 *	年龄
 *成员函数
 *	数据成员的封装函数
 */

void tester(Teacher2 t)
{
}


int main(void)
{
	// 默认构造函数；
	// 仅仅只是一个概念：从栈中或从堆中实例化的构造函数，初始化时都不用传参，被称为构造函数
	// 构造函数初始化列表

	/*练习*/
	Teacher t1("Joker", 39, 150);

	cout << t1.getName() << " " << t1.getAge() << " " << t1.getNum() << endl;


	/*练习：拷贝构造函数*/

	Teacher2 t2;
	Teacher2 t22 = t2;
	Teacher2 t33(t2);
	// 拷贝构造函数，除以上以外，还会被参数传递的时候自动调用
	// 例子：参考
	tester(t2);


	return 0;
}
