#include <iostream>
#include <iterator>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

bool isEqual(const int *const pb1, const int *const pe1, const int *const pb2, const int *const pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2))
        return false;
    else
    {
        for (auto i = pb1, j = pb2; i != pe1; ++i, ++j)
        {
            if (*i != *j)
                return false;
        }
    }
    return true;
}

int main()
{
    int arr1[4] = {1, 2, 4, 3}; //{1,2,3,4};
    int arr2[4] = {1, 2, 4, 3};

    if (isEqual(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "Two arrays are equal." << endl;
    else
        cout << "Two arrays are not equal." << endl;

    cout << "=====================================" << endl;

    vector<int> vec1 = {1, 2, 4, 3}; //{1,2,3,4};
    vector<int> vec2 = {1, 2, 4, 3};

    if (vec1 == vec2)
        cout << "Two vectors are equal." << endl;
    else
        cout << "Two vectors are not equal." << endl;
    return 0;
}