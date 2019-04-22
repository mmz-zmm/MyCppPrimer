#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool shorterThan(const string &s1){
    return s1.size() < 5;
}


int main()
{
    vector<string> vec{"A", "dog", "is", "running", "super", "fucking", "fast","amazing"};
    auto pos = partition(vec.begin(), vec.end(), shorterThan);
    
    while(pos != vec.end()){
        cout << *pos++ << endl;

    }
    return 0;
}