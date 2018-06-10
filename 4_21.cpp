#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8};
    for(auto & v :vec1){
        v = (v % 2) ? v * 2 : v;
        cout << v << " ";
    }
    cout << endl;
    return 0;
}