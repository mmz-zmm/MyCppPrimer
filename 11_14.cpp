#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <utility>
using namespace std;


int main()
{
    map<string, vector<pair<string, string>>> families;
    string first_name, last_name, birthday;
    cout << "Please input the name and birthday: " << endl;
    while(cin >> last_name >> first_name >> birthday){
        families[first_name].emplace_back(last_name, birthday);
    }
    for(auto family : families){
        for( auto child : family.second)
            cout << "name: " << child.first <<" "<< family.first <<" birthday: "<< child.second<< endl;
    }
    return 0;
}