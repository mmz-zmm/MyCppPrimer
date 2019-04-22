#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    vector<string> vec{"A", "dog", "is", "running", "super", "fucking", "fast","amazing"};
    int sz = 6;

    auto count = count_if(vec.begin(), vec.end(), [=](const string &s) { return s.size() >= sz; });
    cout<< count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;

    return 0;
}