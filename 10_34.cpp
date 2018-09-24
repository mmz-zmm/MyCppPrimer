#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec={0,1,2,3,4,5,6,7,8,9};
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter){
        cout << *r_iter << " ";
    }
    cout << endl;
    return 0;
}