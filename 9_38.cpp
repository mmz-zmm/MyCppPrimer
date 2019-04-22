#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    vector<string> vec;
    string word;
    while(cin >> word){
        vec.push_back(word);
        cout << "current capacity: " << vec.capacity() << endl;
    }
    return 0;
}