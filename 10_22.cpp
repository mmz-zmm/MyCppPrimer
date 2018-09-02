#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;
using namespace std::placeholders;

bool check_size(const string & s,string::size_type sz)
{
    return s.size() >= sz;
}
int main()
{
    vector<string> vec{"A", "dog", "is", "running", "super", "fucking", "fast","amazing"};
    cout << count_if(vec.begin(), vec.end(), bind(check_size, _1, 6)) << endl;

    return 0;
}