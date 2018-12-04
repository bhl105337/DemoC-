#include "pch.h"
#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

Person::Person() {
    m_strName = "Jim";
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::play() {

    cout << m_strName << endl;
    cout << "Person::play()" << endl;
}