#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readFileToVec(const string & filename, vector<string> & vec)
{
    ifstream in(filename);
    if(in)
    {
        string buffer;
        while(getline(in, buffer))
            vec.push_back(buffer);
    }
}

int main()
{
    vector<string> vec;
    readFileToVec("./data/test.txt", vec);
    for(const auto & str :vec)
        cout << str << "\n";
    return 0;
}