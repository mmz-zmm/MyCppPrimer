#include <iostream>
#include "include/10_32_Sales_data.h"
#include <set>
using namespace std;

bool compareIsbn(const Sales_data & lhs, const Sales_data & rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{
    using compareFun = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
    multiset<Sales_data, compareFun> bookstore(compareIsbn);

    typedef bool (*compareFun2)(const Sales_data &lhs, const Sales_data &rhs);
    multiset<Sales_data, compareFun2> bookstore2(compareIsbn);
    return 0;
}