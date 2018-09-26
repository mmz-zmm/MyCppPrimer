#include <set>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

void copy_vector_to_multiset()
{
    multiset<string> c{"seize", "the", "day","the","day"};
    vector<string> v;
    ostream_iterator<string> string_out(cout, " ");

    //copy(c.begin(), c.end(), inserter(v, v.end()));  // third
    copy(c.begin(), c.end(), back_inserter(v)); // forth
    for(auto & w : v){
        string_out = w;
    }
    cout << endl;
}

void copy_multiset_to_vector()
{
    vector<string> v{"seize", "the", "day","the","day"};
    multiset<string> c;
    ostream_iterator<string> string_out(cout, " ");

    copy(v.begin(), v.end(), inserter(c, c.end()));  // first
    //copy(v.begin(), v.end(), back_inserter(c)); // second
    for(auto & w : c){
        string_out = w;
    }
    cout << endl;
}
int main()
{
    copy_vector_to_multiset();
    copy_multiset_to_vector();
    return 0;
}