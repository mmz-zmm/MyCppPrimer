#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Base{
    public:
        void pub_mem(){}
        void memfcn(Base &b) { b = *this; }

    protected:
        int prot_mem;

    private:
        char priv_mem;
};

struct Pub_Derv : public Base{
    int f() { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Priv_Derv : private Base{
    int f1() const { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Prot_Derv : protected Base{
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Derv{
    int use_base() { return prot_mem; }
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Private : public Priv_Derv{
    void memfcn(Base &b) { b = *this; }  // illegal, type Base::Base is inaccessiable
};

struct Derived_from_Protect : public Prot_Derv{
    void memfcn(Base &b) { b = *this; }
};

void test_15_19()
{
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
    Derived_from_Public dd1;
    Derived_from_Protect dd2;
    Derived_from_Private dd3;
}

int main()
{
    test_15_19();
    return 0;
}