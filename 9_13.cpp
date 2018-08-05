#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> list1{1, 2, 3, 4, 5};
    vector<double> vec1(list1.begin(), list1.end());
    for(auto item:vec1)
        cout << item << " ";
    cout << endl;

    vector<int> vec2{6, 7, 8, 9, 0};
    vector<double> vec3(vec2.begin(), vec2.end());
    for(auto item:vec3)
        cout << item << " ";
    cout << endl;
    return 0;
}