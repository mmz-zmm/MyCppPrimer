#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;
using namespace std::placeholders;

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

bool check_size(const string & s, string::size_type sz)
{
    return s.size() < sz;
}
void biggies(vector<string> & words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
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