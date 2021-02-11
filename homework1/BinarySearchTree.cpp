/*
HMW1: Chloe Tu
Collaborators: TA
I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/

#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree()
{root = nullptr;}

/* Creates a pointer to a Treenode and assigns data to it. Calls TN insert_node helper function to sort the new node in the correct hierarchy
@param data The data to be added
*/

void BinarySearchTree::insert(string data)
{
    TreeNode* new_node = new TreeNode;
    new_node->data = data;
    new_node->left = nullptr;
    new_node->right = nullptr;
    if (root == nullptr) root = new_node;
    else root->insert_node(new_node);
}

/* Prints the tree, first checking if it exists
*/

void BinarySearchTree::print() const
{
    if (root != nullptr) root->print_nodes();
}


 /* Deep copy constructor
@param new_node The BST to be copied
@return og Copy of BST
 */

BinarySearchTree::BinarySearchTree(const BinarySearchTree& og)
{
    root = copy(og.root);
}

/* Helper function for deep copy constructor. Creates a new pointer for every node in the original BST. Assigns the pointers a data value and the TreeNodes they should point to.
@param og The TreeNode to be copied
@return Copy of the TreeNode
*/
 TreeNode* BinarySearchTree::copy(const TreeNode* og)
{
    if (og == nullptr) return nullptr;
    else{
        TreeNode* ans = new TreeNode(og->data);
        ans->left = copy(og->left);
        ans->right = copy(og->right);
        return ans;
    }
}

/* Helper function for the deconstructor. Takes a node and its children and kills it recursively .
@param og The TreeNode to be killed
*/
void BinarySearchTree::kill_tree(TreeNode* node)
{
   if (node)
   {
       kill_tree(node->left);
       kill_tree(node->right);
       delete node;
   }
}

/* Destroys the BST and copies the tree on the right to the tree on the left if they are not the same
@param og The TreeNode to be copied
@return Copy of the TreeNode
*/
BinarySearchTree& BinarySearchTree::operator=(const BinarySearchTree& og)
{
     if(this != &og)
     {
         kill_tree(root);
         root = copy(og.root);
     }
     return (*this);
     
}

/* Destructor, destroys BST using helper function kill_tree*/

BinarySearchTree::~BinarySearchTree()
{
    kill_tree(root);
}


