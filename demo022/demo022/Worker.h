#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

class Worker : public Person {
public:
    Worker();

    ~Worker();

    int m_iSalary;

    void work();
};
