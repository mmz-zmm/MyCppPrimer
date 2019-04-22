#include <iostream>
#include <string>
#include "include/13_8_Employee.h"
using namespace std;

int Employee::base_id = 0;

Employee::Employee()
{
    id_ = base_id++;
}

Employee:;Employee(const string &name)
{
    id_ = base_id++;
    name_ = name;
}

int main()
{
    return 0;
}