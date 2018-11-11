#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << ptr.use_count()<<endl;
}

int main()
{
    shared_ptr<int> p(new int(42));
    //process(shared_ptr<int>(p));   //12.10
    process(shared_ptr<int>(p.get())); //12.11

    //int *x(new int(42));
    //process(shared_ptr<int>(x));

    cout << *p << endl;
    return 0;
}