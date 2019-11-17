#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Sales_data
{
public:
  friend ostream &print(ostream &os, const Sales_data &item);
public:
    Sales_data(): Sales_data("", 0, 0.0)
    {
        std::cout << "Sales_data()" << std::endl;
    }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0.0)
    {
        std::cout << "Sales_data(const std::string&)" << std::endl;
    }
    Sales_data(const std::string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p * n)
    {
        std::cout << "Sales_data(const std::string &, unsigned, double)" << std::endl;
    }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &rhs)
    //Sales_data &combine(Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

    explicit operator string() const { return bookNo; }
    explicit operator double() const { return revenue; }

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

ostream &print(ostream &os, const Sales_data & item)
{
    os << item.isbn() <<" "<< item.units_sold <<" " <<item.revenue;
    return os;
}



void test_14_45()
{
    Sales_data data("0x0001", 3, 15);
    //string s = data;
    string s = static_cast<string>(data);
    //double d = data;
    double d = static_cast<double>(data);
    cout << s<< endl;
    cout << d << endl;
}

int main()
{
    test_14_45();
    return 0;
}