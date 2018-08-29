#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;

    int val;
    while(cin >> val){
        vec.push_back(val);
    }

    int aim = 3;
    cout << count(vec.begin(), vec.end(), aim) << endl;

    return 0;
}