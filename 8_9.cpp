#include <iostream>
#include <sstream>
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
    istringstream is("Hello world");
    readStream(is);
    return 0;
}