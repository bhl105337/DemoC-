#include "pch.h"
#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

Person::Person() {
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::eat() {
    //实验二
    m_sName = "Marry";
    m_iAge = 16;


    cout << "eat()" << endl;
}
