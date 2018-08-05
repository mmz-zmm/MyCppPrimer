#pragma once
#include <iostream>
#include <string>
// move definition of struct to the top, so as the read function
class Sales_data;

Sales_data add(const Sales_data &, const Sales_data);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

class Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);
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
    Sales_data(std::istream & is): Sales_data()
    { 
        std::cout << "Sales_data(std::istream &)" << std::endl;
        read(is, *this);
    }

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    inline double avg_price() const;
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


