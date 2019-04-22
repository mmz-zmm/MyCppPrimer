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
    cout << "Before sort: \n";
    dump(words);

    sort(words.begin(), words.end());
    cout << "After sort: \n";
    dump(words);

    auto end_unique = unique(words.begin(), words.end());
    cout << "After unique: \n";
    dump(words);

    words.erase(end_unique, words.end());
    cout << "After erase: \n";
    dump(words);
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    elimDups(vec);

    return 0;
}