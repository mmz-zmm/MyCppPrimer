#ifndef _7_4_PERSON_H
#define _7_4_PERSON_H
#include <string>
using std::istream;
using std::ostream;
using std::string;

struct Person;

istream &read(istream &, Person &);

struct Person
{
    Person() = default;
    Person(const string & name_, const string & address_):name(name_), address(address_){}
    Person(istream &is) { read(is, *this); }

    string name;
    string address;
    string getName() const { return name; }
    string getAddress() const { return address; }
};

istream &read(istream & is, Person & p)
{
    is >> p.name >> p.address;
    return is;
}
ostream &print(ostream & os, const Person &p)
{
    os << p.name << " " << p.address;
    return os;
}
#endif