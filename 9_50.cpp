#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    vector<string> vec1{"1", "2", "3", "4", "5"};
    int sum1 = 0;
    for(auto & item : vec1){
        sum1 += stoi(item);
    }
    cout << "sum of vector is : " << sum1 << endl;

    vector<string> vec2{"1.1", "2.1", "3.1", "4.1", "5.1"};
    double sum2 = 0.0;
    for(auto & item : vec2){
        sum2 += stod(item);
    }
    cout << "sum of vector is : " << sum2 << endl;
    return 0;
}