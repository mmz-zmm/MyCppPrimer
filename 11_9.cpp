#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;


int main()
{
    map<string, list<unsigned>> map1; // 11_9

    map<vector<int>::iterator, int> map2; // 11_10
    vector<int> vec{1, 2};
    map2.insert(make_pair(vec.begin(), *vec.begin()));
    for(auto w : map2)
        cout << *w.first << endl;

    // failed. cause list iterator has not defined  < operator
    map<list<int>::iterator, int> map3;
    list<int> lst{3, 4};
   
    map3.insert(make_pair(lst.begin(), *lst.begin()));
    for(auto w : map3)
        cout << *w.first << endl;    
    return 0;
}