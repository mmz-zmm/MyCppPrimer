#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using namespace std::placeholders;

bool check_size(int a,const string &s)
{
    return a > s.size();
}

int main()
{
    string str{"love"};
    vector<int> vec{3, 4, 5, 6, 7, 8, 9};
    auto pos = find_if(vec.begin(), vec.end(), bind(check_size, _1, str));
    cout << *pos<<endl;
    return 0;
}