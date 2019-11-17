#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Base{
    public:
        void pub_mem(){}
        protected:
            int prot_mem;

        private:
            char priv_mem;
};

struct Pub_Derv : public Base{
    int f() { return prot_mem; }
};

struct Priv_Derv : private Base{
    int f1() const { return prot_mem; }
};

struct Prot_Derv : protected Base{
};

struct Derived_from_Public : public Pub_Derv{
    int use_base() { return prot_mem; }
};

struct Derived_from_Private : public Priv_Derv{
};

struct Derived_from_Protect : public Prot_Derv{
};

void test_15_18()
{
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
    Derived_from_Public dd1;
    Derived_from_Protect dd2;
    Derived_from_Private dd3;

    Base *p = &d1;
    p = &d2; // illegal
    p = &d3; // illegal
    p = &dd1;
    p = &dd2; // illegal
    p = &dd3; // illegal
}

int main()
{
    test_15_18();
    return 0;
}