#include <iostream>
#include <string>
using namespace std;

class HasPtr{
    public:
    friend void swap(HasPtr &, HasPtr &);
    HasPtr(const string &s = string()):ps(new string(s)), i(0){}
    HasPtr(const HasPtr & hp){
        if( hp.ps != ps )
        {
            ps = new string(*(hp.ps));
        }
        i = hp.i;
    }
    HasPtr& operator=(HasPtr rhs)
    {
        swap(*this, rhs);
        return *this;
    }
    ~HasPtr() { delete ps; }

    string content() { return *ps; }
    

  private:
    string *ps;
    int i;
};

inline void swap(HasPtr&lhs, HasPtr&rhs)
{
    cout << "using swap method now.\n";
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

int main()
{
    HasPtr p1("hello world"), p2;
    p2 = p1;
    cout << p2.content() << endl;
    return 0;
}