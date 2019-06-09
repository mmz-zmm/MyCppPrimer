#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include "include/13_42_TextQuery.h"
using namespace std;
extern string trim_word(const string &);

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);

    while(true){
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s)) << endl;
    }
}

int main()
{
    //ifstream infile("../data/12_30.txt");
    ifstream infile("./data/12_30.txt");
    runQueries(infile);
    //cout << trim_word("2015,");

    return 0;
}