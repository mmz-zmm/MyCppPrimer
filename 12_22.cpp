#include <memory>
#include <iostream>
#include <string>
#include <fstream>
#include "include/12_22_ConstStrBlobPtr.h"
using namespace std;


int main()
{
    string input_file = "./data/12_20.txt";
    ifstream fin(input_file);

    StrBlob blob;
    string line;
    while(getline(fin, line)){
        blob.push_back(line);
    }
    for (ConstStrBlobPtr begin(blob.begin()), end(blob.end()); begin != end; begin.incr())
        cout << begin.deref()<<endl;
    return 0;
}