#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Foo
{
public:
    Foo(vector<int> & ivec):data(ivec){}
    Foo sorted() &&;
    Foo sorted() const &;
    friend ostream &operator<<(ostream &out, const Foo &f);

private:
    vector<int> data;
};

Foo Foo::sorted() &&
{
    cout << "call sorted() &&\n";
    sort(data.begin(), data.end());
    return *this;
}

Foo Foo::sorted() const &
{
    cout << "call sorted() const &\n";
    return Foo(*this).sorted();
    // Foo ret(*this);
    // return ret.sorted();
}

ostream &operator<<(ostream &out, const Foo &f)
{
    auto &data = f.data;
    for_each(data.begin(), data.end(), [&out](int a) { out << a << " "; });
    return out;
}

int main()
{
    vector<int> ivec = {1, 4, 3, 5, 2};
    Foo f1(ivec);
    Foo f2 = f1.sorted();
    cout << f2 << endl;
}