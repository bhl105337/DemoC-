#include "pch.h"
#include "Soldier.h"

#include <iostream>
#include <string>

using namespace std;

Soldier::Soldier() {
    cout << "Soldier()" << endl;
}

Soldier::~Soldier() {
    cout << "~Soldier()" << endl;
}


void Soldier::play(int x) {
    cout << m_strName << endl;
    cout << Person::m_strName << endl;
    cout << "Soldier::play()" << endl;
}

void Soldier::work() {
    m_strName = "Merry";//此时成员重名，所访问的是Soldier下的m_strName
    Person::m_strName = "Ruby";
    cout << "Soldier::work()" << endl;
}
