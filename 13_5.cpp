#include <iostream>
#include <string>
using namespace std;

class HasPtr{
    public:
    HasPtr(const string &s = string()):ps(new string(s)), i(0){}
    HasPtr(const HasPtr & hp){
        if( hp.ps != ps )
        {
            ps = new string(*(hp.ps));
        }
        i = hp.i;
    }
    ~HasPtr() { delete ps; }

    string content() { return *ps; }

  private:
    string *ps;
    int i;
};

int main()
{
    HasPtr p1("hello world");
    HasPtr p2 = p1;
    cout << p2.content() << endl;
    return 0;
}