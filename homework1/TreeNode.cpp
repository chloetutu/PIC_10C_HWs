/*
HMW1: Chloe Tu
Collaborators: TA
I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/

#include "TreeNode.h"
#include <iostream>

TreeNode::TreeNode(){};
TreeNode::TreeNode(std::string _data): data(_data){};

/* Helper function for BST insert. Sorts a new node in the right hierarchy recursively.
 @param new_node The node to be added
 */
void TreeNode::insert_node(TreeNode* new_node)
{
    if (new_node->data < data)
    {
        if (left == nullptr) left = new_node;
        else left->insert_node(new_node);
    }
    else if (data < new_node->data)
    {
        if (right == nullptr) right = new_node;
        else right->insert_node(new_node);
    }
}

/* Helper function for BST print. Prints the data in tree nodes from smallest to largest recursively.
*/
void TreeNode::print_nodes() const
{
    if (left != nullptr) left->print_nodes();
    std:: cout << data << "\n";
    if (right != nullptr) right->print_nodes();
}
