#include "7_4_Person.h"
#include <iostream>

istream &read(istream &is, Person & person)
{
    is >> person.name >> person.address;
    return is;
}
ostream &print(ostream &os, const Person & person)
{
    os << person.name << " " << person.address;
    return os;
}