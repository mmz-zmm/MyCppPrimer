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
    using compareFunc = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
    multiset<Sales_data, compareFunc> bookstore(compareIsbn);

    multiset<Sales_data, compareFunc>::iterator s_it = bookstore.begin();

    return 0;
}