#pragma once

#include <iostream>
#include <string>

class Quote{
    public:
        Quote() = default;
        Quote(const std::string & book, double sales_price):bookNo(book), price(sales_price){}
        std::string isbn() const { return bookNo; }

        virtual double net_price(std::size_t n) const{
            return n * price;
        }

        virtual ~Quote() = default;
        virtual void debug() const;

    private:
        std::string bookNo;

    protected:
        double price;
};

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    item.debug();
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}

void Quote::debug()const 
{
    std::cout << "This is Class Quote:" << std::endl;
    std::cout << "   BookNo:" << bookNo << std::endl;
    std::cout << "   Price :" << price << std::endl;
}
