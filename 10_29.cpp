#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;


int main()
{
    ifstream inf("./data/10_29.txt");
    istream_iterator<string> in_iter(inf), eof;
    vector<string> vec(in_iter, eof);
    for(auto it: vec)
        cout << it << " ";
    cout << endl;
    return 0;
}