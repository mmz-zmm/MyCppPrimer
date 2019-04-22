#include <iostream>
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

int main()
{
    std::string s = "Hello world";
    Sales_data s3("Hello world", 10, 15.0);

    print(cout,s3) << endl;

    s3.combine(s);
    print(cout, s3)<<endl;

    return 0;
}
