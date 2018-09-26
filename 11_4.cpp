#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
                           "the", "but", "and", "or", "an", "a"};
    string word;
    while(cin >> word){
        for(auto &c: word)
            c = tolower(c);
        //https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom  erase_remove_idiom
        // ispunc should be used with global scope
        word.erase(remove_if(word.begin(), word.end(),::ispunct), word.end());
        if(exclude.find(word) == exclude.end())
            ++word_count[word];
    }

    for(const auto &w : word_count)
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    return 0;
}