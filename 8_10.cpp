#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main()
{
    
    ifstream fin("./data/8_10_input.txt");
    vector<string> contents;
    string line;
    while(getline(fin, line))
        contents.push_back(line);

    for(const auto &item : contents)
    {
        istringstream sin(item);
        string word;
        while(sin >> word)
            cout << word << endl;
    }

    fin.close();
    return 0;
}