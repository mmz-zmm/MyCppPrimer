#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> & words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = stable_partition(words.begin(), words.end(), [sz](const string &s) { return s.size() < sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;

    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> vec{"A", "dog", "is", "running", "super", "fucking", "fast","amazing"};

    biggies(vec, 5);
    return 0;
}