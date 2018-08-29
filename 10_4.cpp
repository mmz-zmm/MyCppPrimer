#include <iostream>
#include <numeric>
#include <vector>
using namespace std;


int main()
{
    vector<double> vec{1.4,2.1,3.1,4.8};

    double sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;
    return 0;
}