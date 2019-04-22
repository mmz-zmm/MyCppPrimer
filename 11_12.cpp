#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;


int main()
{
    vector<pair<string, int>> vec;
    string word;
    int num;
    while(cin >> word >> num)
        //vec.push_back(make_pair(word, num));// method 1
        //vec.push_back(pair<string, int>(word, num));// method 2
        //vec.push_back({word, num});// method 3
        vec.emplace_back(word, num);// method 4  

    for(auto & item : vec)
        cout << item.first << " " << item.second << endl;
    return 0;
}