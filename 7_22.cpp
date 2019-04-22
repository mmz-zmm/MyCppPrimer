# pragma once
#include <string>
using std::istream;
using std::ostream;
using std::string;

class Person;

istream &read(istream &, Person &);
ostream &print(ostream &, const Person &);

struct Person
{
    friend istream &read(istream &, Person &);
    friend ostream &print(ostream &, const Person &);
public:
    Person() = default;
    Person(const string & name_, const string & address_):name(name_), address(address_){}
    Person(istream &is) { read(is, *this); }
    string getName() const { return name; }
    string getAddress() const { return address; }
private:
    string name;
    string address;

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