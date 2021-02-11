/*
HMW1: Chloe Tu
Collaborators: TA
I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <iostream>
#include "TreeNode.h"
#include <string>

using namespace std;

class BinarySearchTree
{
public:
    BinarySearchTree();
    void insert (string data);
    //destructor
    ~BinarySearchTree();
    //copy constructor
    BinarySearchTree(const BinarySearchTree&);
    //assignment operator
    BinarySearchTree& operator=(const BinarySearchTree&);
    void print() const;
private:
    //destructor helper
    void kill_tree(TreeNode*);
    //copy constructor helper
    TreeNode* copy(const TreeNode*);
    TreeNode* root;
};

#endif /* BinarySearchTree_hpp */
