#include "pch.h"
#include "Soldier.h"
#include <iostream>
#include <string>

using namespace std;

Soldier::Soldier(string name, int age) {
    m_strName = name;
    m_iAge = age;
    cout << "Soldier::Soldier()" << endl;
}

Soldier::~Soldier() {
    cout << "Soldier::~Soldier()" << endl;
}

void Soldier::work() {
    cout << m_strName << endl;
    cout << m_iAge << endl;
    cout << "Soldier::work()" << endl;
}
