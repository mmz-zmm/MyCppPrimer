#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class ReadString
{
private:
    /* data */
    istream &ins;
public:
    ReadString(istream & in = cin):ins(in){}
    string operator()()const 
    {
        string str;
        getline(ins, str);
        return ins ? str : string();
    }
};

int main()
{
    ReadString in;
    vector<string> vec;
    string str;
    while (!(str = in()).empty())
    {
        vec.push_back(str);
    }

    for_each(vec.begin(), vec.end(), [](const string &s) { cout << s << "\n"; });

    return 0;
}
