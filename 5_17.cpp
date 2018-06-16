#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    decltype(v1.size()) min_size = (v1.size() > v2.size()) ? v2.size() : v1.size();

    bool is_prefix = true;
    for (decltype(min_size) i = 0; i != min_size; ++i){
        if(v1[i] != v2[i]){
            is_prefix = false;
            break;
        }
    }
    cout << is_prefix << endl;
    return 0;
}