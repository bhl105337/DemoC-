// ʹ�ú궨�壺�ڹ�������ʹ�ã���ʹ���ǹ�����Ҳ����ʹ�ã���ֹ��������ñ���
#ifndef PERSON_H__
#define PERSON_H__
#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	Person(string color = "black");
	virtual ~Person();
	void printColor();
protected:
	string m_sColor;
};

#endif
