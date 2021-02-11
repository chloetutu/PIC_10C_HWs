/*
HMW1: Chloe Tu
Collaborators: TA
I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/

#ifndef TreeNode_h
#define TreeNode_h
#include <string>

class TreeNode
{
public:
    TreeNode();
    TreeNode(std::string);
    void insert_node(TreeNode* new_node);
    void print_nodes() const;
private:
    std:: string data;
    TreeNode* left;
    TreeNode* right;
friend class BinarySearchTree;
};

#endif /* TreeNode_hpp */
