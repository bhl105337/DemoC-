#include "pch.h"
#include "Teacher.h"


Teacher::Teacher() //�޲ι��캯��
{
	/*��ʼ����ֵ�����ڲ�ͨ��setName�ı�ʱ�ĳ�ʼֵ*/
	m_strName = "Jim";
	m_intAge = 35;
	cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, int age) //�вι��캯��
{
	m_strName = name;
	m_intAge = age;
	cout << "Teacher(string name, int age)" << endl;
}


void Teacher::setName(string name)
{
	m_strName = name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int age)
{
	m_intAge = age;
}

int Teacher::getAge()
{
	return m_intAge;
}
