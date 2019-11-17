#pragma once

#include "15_15_Disc_Quote.h"
#include <string>
#include <iostream>

class Limit_quote : public Disc_quote{
    public:
        Limit_quote() = default;
        Limit_quote(const std::string & book, double p, 
        std::size_t qty, double disc):Disc_quote(book, p, qty, disc){}
        double net_price(std::size_t cnt) const override;

        void debug() const override;

    private:
        std::size_t max_qty = 0;
        double discount = 0.0;
};

double Limit_quote::net_price(std::size_t cnt) const {
    if( cnt <= max_qty){
        return cnt * (1 - discount) * price;
    }else{
        return (cnt - max_qty) * price + max_qty * (1- discount) *price;
    }
}

void Limit_quote::debug() const
{
    std::cout << "This is Class limmit_quote:" << std::endl;
    std::cout << "  Price:" << price<< std::endl;
    std::cout << "  Max_qty:" << max_qty <<std::endl;
    std::cout << "  Discount:" << discount<<std::endl;
}