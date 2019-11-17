#include <iostream>
#include <vector>
#include <string>
using namespace std;

class base{
    public:
    base(const string &name): basename(name){}
        string name() { return basename; }
        virtual void print(ostream &os) { os << basename; }

    private:
        string basename;
};

class derived : public base{
    public:
        derived(const string &name, int num):base(name), i(num){}
        void print(ostream &os) override {
            base::print(os);
            os << " " << i;
        }

    private:
        int i;
};

void test_15_13()
{
    derived d("Test", 2);
    d.print(cout);
}

int main()
{
    test_15_13();
    return 0;
}