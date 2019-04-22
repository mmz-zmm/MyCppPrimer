#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int arr1[] = {5,6,7,8};
    vector<int> vec1(begin(arr1), end(arr1));
    int arr2[4];
    for (auto i = vec1.begin(); i != vec1.end(); ++i){
        arr2[i - vec1.begin()] = *i;
    }
    for(auto v:arr2)
        cout << v << " ";
    cout << endl;

    cout << (~'q' << 6) << endl;
    return 0;
}