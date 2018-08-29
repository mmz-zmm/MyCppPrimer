#include <iostream>
#include <vector>
#include <algorithm>
#include "./include/7_26_Sales_data.h"
using namespace std;

bool compareIsbn(const Sales_data & d1, const Sales_data & d2)
{
    return d1.isbn() < d2.isbn();
}

int main()
{
    Sales_data s1("0x0002"), s2("0x0001"), s3("0y0001"), s4("0w0002");
    vector<Sales_data> vec{s1, s2, s3, s4};
    sort(vec.begin(), vec.end(), compareIsbn);
    for(const auto & item :vec){
        print(cout, item) << endl;
    }
    return 0;
}