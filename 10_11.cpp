#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void dump(const vector<string> & vec)
{
    for(auto &word : vec)
        cout << word << " ";
    cout << endl;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}
bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    elimDups(vec);
    dump(vec);

    stable_sort(vec.begin(), vec.end(), isShorter);
 
    dump(vec);
    return 0;
}