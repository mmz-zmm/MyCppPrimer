#include <iostream>
#include <vector>
using std::boolalpha;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2{1, 2, 3, 4, 5};
    vector<int> vec3{1, 2, 3, 4, 5, 6};

    cout << boolalpha << (vec1 == vec2) << endl;
    cout << boolalpha << (vec1 == vec3) << endl;

    return 0;
}