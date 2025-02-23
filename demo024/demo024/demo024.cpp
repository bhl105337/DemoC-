#include "pch.h"
#include <iostream>
#include <string>
#include "Soldier.h"


using namespace std;
//
///* 例一 */
//class Person {
//public:
//    void play();
//
//protected:
//    string m_sName;
//    string code
//};
//
//class Soldier : public Person {
//public:
//    void play();
//
//    void work();
//
//protected:
//    int m_iCode;
//    int code
//};
/**
 * 继承关系中隐藏
 * 练习要求
 * 定义Person类
 *  数据成员：m_strName
 *  成员函数：构造函数、paly()
 *
 * 定义Soldier类
 *  数据成员：无
 *  成员函数：构造函数、play()、work()
 */

int main()
{
	//继承中的特殊关系
	//在c++的继承中有两个容易混淆的概念，覆盖和隐藏
	//隐藏的概念
	/**假设
	 * 父类A->void abc()
	 * 子类B->void abc()
	 * 即，子B类不但继承了父类A的成员函数，却也有着与父类相同名字的成员函数，在理论上B在继承了A之后，B的同名成员函数会隐藏掉A的成员函数
	 * 而在B实例化之后只能是访问到B的成员函数，不能访问到A的成员函数
	 * 从使用中的体验上来说，A的成员函数似乎是被隐藏了，但是实际父类A的成员函数继承到B当中，并且还是可以通过特殊的手段访问到A的成员函数
	 * 这个特性称为隐藏
	 * 隐藏不仅限于成员函数，数据成员也可以拥有同样的特征
	 * 关键字，父子关系，成员同名，隐藏
	 */
	//例一
	//    Soldier soldier;
	//    soldier.play();//直接访问当前实例化对象的成员
	//    soldier.Person::play();//通过当前实例化对象，访问到父级的成员
	/**
	 * 另：在Person里的code成员和Soldier的code类型不同，但是名字相同的情况，在想要进行访问时，因两者都在protected下无法直接实例化访问，所以使用成员函数中访问
	 * 但是不建议这样定义数据成员，因为容易混淆
	 * void Soldier::work(){
	 *      code = 12345;
	 *      Person::code = "67890"
	 * }
	 * 因此，定义成员时最好加上前缀如m_strXXX或m_iXXX
	 */

	Soldier sol;
	sol.work();
	sol.play(7);

	sol.Person::play();//访问父级的同名成员函数
//	sol.play();//改造后
	/**思考
	 * 当前的paly重名，参数也是一样，但是在参数不一样的情况下能否形成隐藏
	 * 改造后的运行情况是报错的，因为这样也是调用Soldier下的play，无法调用Person的play
	 * 话句话说就是即使参数不同，也不能形成重载，只能是隐藏
	 */

	system("pause");
	return 0;
}
