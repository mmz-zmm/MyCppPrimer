#include "include/13_44_String.h"
#include <iostream>
#include <vector>

void foo(String x)
{
    std::cout << x.c_str() << std::endl;
}

void bar(const String& x)
{
    std::cout << x.c_str() << std::endl;
}

String baz()
{
    String ret("world");
    String five = ret;
    return ret;
}

int main()
{
    char text[] = "world";

    String s0;
    std::cout << s0.size() << "  " << s0.capacity() << std::endl;
    s0.push_back('a');
    std::cout << s0.size() << "  " << s0.capacity() << std::endl;
    s0.push_back('b');
    std::cout << s0.size() << "  " << s0.capacity() << std::endl;
    s0.push_back('c');
    std::cout << s0.size() << "  " << s0.capacity() << std::endl;
    String s1("hello");
    String s2(s0);
    String s3 = s1;
    String s4(text);
    s2 = s1;

    foo(s1);
    bar(s1);
    foo("temporary");
    bar("temporary");
    String s5 = baz();

    std::cout << "----\n";

    std::vector<String> v_str;
    v_str.push_back("Hello");
    v_str.push_back("World");
    v_str.push_back("How");
    v_str.push_back("are");
    v_str.push_back("You");
    return 0;
}
