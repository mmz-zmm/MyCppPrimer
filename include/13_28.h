
#pragma once
#include <string>

class TreeNode{
    private:
      std::string *value;
      int *count;
      TreeNode *left;
      TreeNode *right;
    public:
    TreeNode(const std::string &v = std::string()):
    value( new std::string(v)), count(new int(1)), left(nullptr), right(nullptr){}

    TreeNode(const TreeNode &node);
    TreeNode &operator=(const TreeNode &node);
    ~TreeNode();
};

class BinStrTree{
    private:
      TreeNode *root;
    public:
      BinStrTree():root(new TreeNode()){}
      BinStrTree(const BinStrTree &bst):root(new TreeNode(*bst.root)){}
      BinStrTree &operator=(const BinStrTree &bst);
      ~BinStrTree() { delete root; }
};

TreeNode::TreeNode(const TreeNode &node):
value(node.value), count(node.count), left(node.left),right(node.right)
{
    ++*count;
}

TreeNode& TreeNode::operator=(const TreeNode&node)
{
    ++*node.count;
    if(--*count == 0){
        if(left){
            delete left;
            left = nullptr;
        }
        if(right){
            delete right;
            right = nullptr;
        }
        delete count;
        count = nullptr;
        delete value;
    }
    value = node.value;
    count = node.count;
    left = node.left;
    right = node.right;
    return *this;
}
TreeNode::~TreeNode()
{
    if(--*count == 0){
        if(left){
            delete left;
            left = nullptr;
        }
        if(right){
            delete right;
            right = nullptr;
        }
        delete count;
        count = nullptr;
        delete value;
    }   
}

BinStrTree& BinStrTree::operator=(const BinStrTree &bst)
{
    TreeNode *new_root = new TreeNode(*bst.root);
    delete root;
    root = new_root;
    return *this;
}