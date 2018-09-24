#pragma once
#include <iostream>
#include <string>
// move definition of struct to the top, so as the read function
class Sales_data
{
    friend Sales_data operator+(const Sales_data &, const Sales_data &);
    friend std::ostream &operator<<(std::ostream &, const Sales_data &);
    friend std::istream &operator>>(std::istream &, Sales_data &);
public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p * n){}
    Sales_data(std::istream & in) {  in >> *this ; }

    Sales_data &operator+=(const Sales_data &);
    std::string isbn() const { return bookNo; }

private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data& Sales_data::operator+=(const Sales_data& a)
{
    units_sold += a.units_sold;
    revenue += a.revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    if(units_sold)
        return revenue / units_sold;
    else
        return 0.0;
}

Sales_data operator+(const Sales_data & a, const Sales_data & b)
{
    Sales_data ret(a);
    ret += b;
    return ret;
}

std::ostream & operator<<(std::ostream & out, const Sales_data & s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
}
std::istream & operator>>(std::istream & in, Sales_data & s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    if(in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_data(); 
    return in;
}
