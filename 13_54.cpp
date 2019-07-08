#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class HasPtr{
    public:
    friend void swap(HasPtr &, HasPtr &);
    friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);
    HasPtr(const string &s = string()):ps(new string(s)), i(0){}
    HasPtr(const HasPtr & hp){
        if( hp.ps != ps )
        {
            ps = new string(*(hp.ps));
        }
        i = hp.i;
    }
    HasPtr(HasPtr && hp) noexcept:ps(hp.ps),i(hp.i)
    {
        hp.ps = nullptr;
        cout<<"call move constructor!\n";
    }
    HasPtr& operator=(HasPtr rhs)
    {
        swap(*this, rhs);
        return *this;
    }
    HasPtr& operator=(HasPtr&& rhs)
    {
        if(this != &rhs)
        {
            delete ps;
            ps = rhs.ps;
            i = rhs.i;
            rhs.ps = nullptr;
            cout << "call move assignment!\n";
        }
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

bool operator <(const HasPtr & lhs, const HasPtr & rhs)
{
    return *(lhs.ps) < *(rhs.ps);
}     

int main()
{
    vector<HasPtr> vec;
    vec.push_back(HasPtr("The"));
    vec.push_back(HasPtr("cat"));
    vec.push_back(HasPtr("sit"));
    vec.push_back(HasPtr("on"));
    vec.push_back(HasPtr("the"));
    vec.push_back(HasPtr("mat"));
    sort(vec.begin(), vec.end());
    
    return 0;
}
