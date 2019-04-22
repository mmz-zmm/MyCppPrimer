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
    unique_copy(vec.begin(), vec.end(), out_iter);
    cout << endl;
    return 0;
}