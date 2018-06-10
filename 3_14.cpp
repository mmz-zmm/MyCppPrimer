#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int i;
    while(cin>> i){
        vec.push_back(i);
    }

    for(auto j:vec){
        cout << j << " ";
    }
    cout<<endl;
    return 0;
}