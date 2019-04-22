#include <iostream>
#include <string>
using namespace std;

istream& readStream(istream & is)
{
    string buffer;
    while(is >> buffer)
    {
        cout << buffer << endl;
    }
    is.clear();
    return is;
}

int main()
{
    istream &is = readStream(cin);
    cout << is.rdstate() << endl;
    return 0;
}