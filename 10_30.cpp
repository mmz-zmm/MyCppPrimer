#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    istream_iterator<int> in_iter(cin), eof;
    vector<int> vec(in_iter, eof);

    sort(vec.begin(), vec.end());

    ostream_iterator<int> out_iter(cout, " ");
    for(auto e: vec)
        *out_iter++ = e;
    cout << endl;
    return 0;
}