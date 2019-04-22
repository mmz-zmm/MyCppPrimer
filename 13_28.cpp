#include <iostream>
#include <string>
#include "include/13_28.h"
using namespace std;


int main()
{
    TreeNode node1("hello");
    TreeNode node2(node1);
    TreeNode node3(node1);
    TreeNode node4;

    node4 = node1;

    return 0;
}