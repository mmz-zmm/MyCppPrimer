#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;


int main()
{
    multimap<string, string> families;
    string first_name, last_name;
    cout << "Please input the name: " << endl;
    while(cin >> last_name >> first_name){
        families.insert({first_name, last_name});
    }
    for(auto family : families){
        cout << "name: " << family.second <<" "<< family.first << endl;
    }
    return 0;
}