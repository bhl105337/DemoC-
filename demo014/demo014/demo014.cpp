#include "pch.h"
#include <iostream>
#include <string>
#include "Array.h";

using namespace std;

/*例子*/
// 例一：浅拷贝
/*
class Array
{
public:
	Array() { m_iCount = 5; } //初始值5
	Array(const Array& arr) { m_iCount = arr.m_iCount; }
	// 拷贝构造函数的实现：
	// 传入的参数arr，因为arr的类是Array，因此arr里面含有了数据成员m_iCount，最后把arr.m_iCount赋值给类本身的m_iCount
private:
	int m_iCount;
};
*/

// 例二：
/*
class Array2
{
public:
	Array2()
	{
		m_iCount = 5; //初始值5
		m_pArr = new int[m_iCount];
	}

	Array2(const Array2& arr)
	{
		m_iCount = arr.m_iCount;
		m_pArr = arr.m_pArr;
	}

	// 拷贝构造函数的实现：
	// 传入的参数arr，因为arr的类是Array，因此arr里面含有了数据成员m_iCount，最后把arr.m_iCount赋值给类本身的m_iCount
private:
	int m_iCount;
	int* m_pArr; //增加成员
};
*/

// 例三：深拷贝
/*
class Array3
{
public:
	Array3()
	{
		m_iCount = 5; //初始值5
		m_pArr = new int[m_iCount];
	}

	Array3(const Array3& arr)
	{
		m_iCount = arr.m_iCount;
		m_pArr = new int[m_iCount]; //申请新的内存
		for (int i = 0; i < m_iCount; i++)
		{
			m_pArr[i] = arr.m_pArr[i]; //将旧的内存元素全部拷贝到新的内存里面
		}
	}

	// 拷贝构造函数的实现：
	// 传入的参数arr，因为arr的类是Array，因此arr里面含有了数据成员m_iCount，最后把arr.m_iCount赋值给类本身的m_iCount
private:
	int m_iCount;
	int* m_pArr; //增加成员
};
*/


/*
 * 练习
 * 浅：
 * 1、定义Array类，数据成员为m_iCount
 * 2、成员函数包括数据封装函数，构造函数，拷贝函数和析构函数，体会浅拷贝原理
 * 
 * 深：
 * 3、增加数据成员m_pArr，并增加m_pArr地址查看函数
 * 4、改造构造函数，拷贝构造函数和析构函数，体会深拷贝的原理和必要性
 * 参考Array.h和Array.cpp
 */

int main()
{
	// 回忆：拷贝构造函数的声明方法，合时被自动调用
	// 对象间的拷贝：深拷贝与浅拷贝

	/*例子一*/
	// Array arr1; //初始化，因此调用的是Array();
	// Array arr2 = arr1; //当想用arr1的值初始化arr2的时候就会调用到拷贝构造函数，把arr1的值赋值给arr2
	// 注：这种拷贝方式也叫做浅拷贝

	/*例子二*/
	// Array2 arr21;
	// Array2 arr22 = arr21;
	/* 这种方式拷贝在第二个例子中是存在问题的*
	 * 这样的情况下，arr21的指针和arr22的指针势必会指向同一块内存
	 * 如果给arr21的内存赋值，arr22也同样赋值，那么在同一块内存的情况下arr22的值会重写覆盖了arr21的值
	 * 最严重的情况是arr21内存被销毁释放之后，然后再去释放arr22的指向内存，那么同一块内存就会被小辉两次，就会引起崩溃
	 * 最好的方式是两个指针指向不同的内存
	 */
	//目的：拷贝时，不只是，要简单的拷贝指针，更要拷贝内存里面的每一个元素，到另一个内存上，参考例三


	/*例子三*/
	// Array3 arr31;
	// Array3 arr32 = arr31;
	// 总结：当进行对象拷贝时，不是简单的浅拷贝，而是从堆中的内存数据也进行拷贝，这种拷贝方式叫深拷贝


	/*练习*/

	// 改造前：
	// Array arr1; //因为此时没有做任何事，只是构造函数上打印了一个Array，因此需要setCount赋一个值
	// arr1.setCount(10); //给m_iCount赋值

	// 改造后
	// Array arr1(10);
	//
	// Array arr2(arr1); //通过arr1实例化arr2，势必会调用arr2拷贝构造函数
	// cout <<"m_iCount "<< arr2.getCount() << endl;

	// 这时更需要关心的是m_pArr的值，因此需要分别使用arr1和arr2打印两者的值是否相等
	// arr1.printAddr();
	// arr2.printAddr();
	// 可以看到，两次打印都是指向同一块内存，在释放时，就会对同一块内存释放两次，那么就是出现运行的错误，这时，就需要使用到深拷贝的操作

	/*浅拷贝，原理：将值直接拷贝过去给新的实例化*/

	

	/*解析深拷贝思路*/
	Array arr1(10);

	Array arr2(arr1);
	// 1、在arr1实例化中，给m_iCount赋值，然后声明的一段内存m_pArr
	// 2、给这段内存赋了相应的值
	// 3、在实例化arr2的时候所用的是arr1去实例化它，因此调用的是拷贝构造函数，申请新的内存，拷贝旧的内存的值，到新的内存中
	// 4、通过下面的打印可得知第一次0-9是arr1的指向内存的值，第二次0-9是arr2的指向内存的值
	arr1.printArr();
	arr2.printArr();


	system("pause");
	return 0;
}
