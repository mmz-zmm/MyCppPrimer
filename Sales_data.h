#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
struct Sales_data
{
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data);
ostream &print(ostream &, const Sales_data);
istream &read(istream &, Sales_data &);
#endif