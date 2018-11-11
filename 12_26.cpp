#include <iostream>
#include <memory>
#include <string>
using namespace std;


int main()
{
    size_t n;
    cin >> n;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    auto q = p;
    while(cin >> s && q != p+n)
    {
        alloc.construct(q++, s);
    }
    cout << "read finished, now print:\n";
    while( q != p)
    {
        alloc.destroy(--q);
        cout << *q << endl;
    }
    alloc.deallocate(p, n);
    return 0;
}