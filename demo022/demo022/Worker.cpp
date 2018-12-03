#include "pch.h"
#include "Worker.h"

#include <iostream>
#include <string>

using namespace std;

Worker::Worker() {
    cout << "Worker()" << endl;
}

Worker::~Worker() {
    cout << "~Worker()" << endl;
}

void Worker::work() {
    m_sName = "Jim";
    m_iAge = 50;
    // protected:此时可以正常访问
    // 说明Person的protected成员继承到了Worker当中

    // private:此时是不允许的
    // 因为通过公有的继承方式无法将基类的private数据成员继承到派生类当中，因此无法访问
    cout << "work()" << endl;
}