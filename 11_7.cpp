#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;


int main()
{
    map<string, vector<string>> families;
    string first_name, last_name;
    cout << "Please input the name: " << endl;
    while(cin >> last_name >> first_name){
        families[first_name].push_back(last_name);
    }
    for(auto family : families){
        for( auto child : family.second)
            cout << "name: " << child <<" "<< family.first << endl;
    }
    return 0;
}