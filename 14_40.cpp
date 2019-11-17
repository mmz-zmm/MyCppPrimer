#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class compareSize
{
    private:
        size_t sz;
    public:
        compareSize(){}
        compareSize(size_t sz_):sz(sz_){}

        bool operator()(const string &str) { return str.size()>= sz; }

        bool operator()(const string& lhs, const string & rhs){
            return lhs.size() < rhs.size();
        }
};

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
    stable_sort(words.begin(), words.end(), compareSize());

    auto wc = find_if(words.begin(), words.end(),compareSize(sz));
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