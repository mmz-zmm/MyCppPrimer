#ifndef _7_4_PERSON_H
#define _7_4_PERSON_H
#include <string>
using std::string;
struct Person
{
    string name;
    string address;
    string getName() const { return name; }
    string getAddress() const { return address; }
};

istream &read(istream &, Person &);
ostream &print(ostream &, const Person &);
#endif