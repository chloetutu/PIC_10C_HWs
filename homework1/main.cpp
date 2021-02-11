/*
HMW1: Chloe Tu
Collaborators: TA
I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/

#include "BinarySearchTree.h"
#include "TreeNode.h"
#include <iostream>
#include <string>

int main()
{
    //check default constructor:
    BinarySearchTree mybst;
    //create a BST with data:
    mybst.insert("Hi");
    mybst.insert("Hello");
    mybst.insert("Hey");
    mybst.insert("Hola");
    //check copy constructor:
    BinarySearchTree mybst2 (mybst);
    mybst.print();
    //check assignment operator:
    mybst = mybst2;
    return 0;
}
