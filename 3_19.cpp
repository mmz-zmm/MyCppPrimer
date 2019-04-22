#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1(10,42);
    for(auto i:vec1)
        cout << i << " ";
    cout << endl;

    vector<int> vec2{42,42,42,42,42,42,42,42,42,42};
    for(auto i:vec2)
        cout << i << " ";
    cout << endl;

    vector<int> vec3;
    for (decltype(vec3.size()) i = 0; i < 10; ++i)
        vec3.push_back(42);

    for(auto i :vec3)
        cout << i << " ";
    cout << endl;
    return 0;
    return 0;
}