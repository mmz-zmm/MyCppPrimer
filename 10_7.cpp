#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;
    list<int> lst;
    int i;
    while(cin >> i){
        lst.push_back(i);
    }
    copy(lst.cbegin(), lst.cend(), back_inserter(vec));

    for(auto it :vec)
        cout << it << " ";
    cout << endl;

    vector<int> vec2;
    vec2.reserve(10);
    fill_n(back_inserter(vec2), 10, 0);

    for(auto it : vec2)
        cout << it << " ";
    cout << endl;
    return 0;
}