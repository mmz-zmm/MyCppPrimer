#include <iostream>
#include "include/10_32_Sales_data.h"
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool compareIsbn(const Sales_data & d1, const Sales_data & d2)
{
    return d1.isbn() < d2.isbn();
}

int main()
{
    istream_iterator<Sales_data> in_iter(cin), eof;
    ostream_iterator<Sales_data> out_iter(cout,"\n");
    vector<Sales_data> record(in_iter, eof);
    sort(record.begin(), record.end(), compareIsbn);
    copy(record.begin(), record.end(), out_iter);
    for (auto beg = record.begin(), end = beg; beg != record.end(); beg = end){
        end = find_if(beg, record.end(), [beg](const Sales_data &s) { return s.isbn() != beg->isbn(); });
        out_iter = accumulate(beg, end, Sales_data(beg->isbn()));
    }
    return 0;
}