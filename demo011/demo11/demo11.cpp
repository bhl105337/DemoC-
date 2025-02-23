#include "pch.h"
#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;

//例子
class Student
{
public:
	// Student() { cout << "11111" << endl; }
	// ~Student() { cout << "22222" << endl; } //析构函数是不允许加任何的参数

	Student() { m_name = new char[20]; } //构造函数中，使用指针指向了堆中，分配的内存，随意在对象销毁的时候，就必须要释放内存，否则就会内存泄漏
	//释放内存最好的时机就是对象被销毁之前，不能早也不能晚，否则，早了，可能还需要再次调用，因此需要析构函数
	~Student() { delete[]m_name; }
private:
	// string m_name;
	char* m_name; //定义数据使用了指针
};

// 练习
// 练习**********************
/**************
 *说明构造函数：teacher类
 *	定义析构函数
 *	普通方式实例化对象，在销毁对象时是否自动调用析构函数
 *	通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数
 *数据
 *	名字
 *	年龄
 *成员数据：
 *	数据成员的封装函数
 */
// 参考Teacher.h和Teacher.cpp

int main()
{
	// 比喻：如果说构造函数是对象在这世间的第一声哭泣，那么析构函数就是临终遗言
	// 析构函数是在对象被销毁是自动调用，是为了归还系统的资源，收拾最后的残局
	// 写法：~className()

	// 思考：析构函数的必要性

	// 总结
	// 如果没有自定义一个析构函数，系统也会自动生成一个析构函数
	// 析构函数没有返回值，也不能有参数
	// 析构函数在销毁时自动调用

	// 对象生命历程
	// 对象实例化时向系统申请内存
	// 内存申请成功后优先将初始化列表的数据定义
	// 执行构造函数->开始正常的逻辑运算
	// 运算终止后进入到销毁环节，先执行析构函数，然后释放内存

	Teacher t1;
	// Teacher* p = new Teacher();
	// delete p;
	Teacher t2(t1);

	system("pause");
	return 0;
}
