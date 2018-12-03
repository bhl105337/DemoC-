#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person();

    ~Person();

    void eat();

//    string m_sName;
//    int m_iAge;

//实验二
//protected:
//    string m_sName;
//    int m_iAge;
//private:
//    int m_iAge;

private:
    string m_sName;
    int m_iAge;
};

