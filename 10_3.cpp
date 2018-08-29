#include <iostream>
#include <numeric>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec{1,2,3,4,5,6};

    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;
    return 0;
}