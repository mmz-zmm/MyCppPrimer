#include <iostream>
#include <string>
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
    cout << in() << endl;
    return 0;
}
