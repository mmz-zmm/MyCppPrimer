#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1;
    int value;
    while(cin>>value)
        vec1.push_back(value);

    for (decltype(vec1.size()) i = 0; i != vec1.size() - 1; ++i)
        cout << vec1[i] + vec1[i+1] << " ";
    cout << endl;

    for (decltype(vec1.size()) i = 0, j = vec1.size() - 1; i <= j;){
            cout << vec1[i++] + vec1[j--] << " ";
    }
    cout <<endl;
    return 0;
}