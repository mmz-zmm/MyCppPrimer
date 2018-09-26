#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    vector<string> vec;
    string word;
    while(cin >> word){
        if(find(vec.begin(), vec.end(), word) == vec.end())
            vec.push_back(word);
    }
    for(auto w: vec)
        cout << w << " ";
    cout << endl;
    return 0;
}