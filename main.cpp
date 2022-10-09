#include <iostream>
#include "BST.h"
int main() {
    BST<int> tree1, *root = nullptr;
    root = tree1.insert(root,10);
    tree1.insert(root,5);
    tree1.insert(root,6);
    tree1.insert(root,12);
    tree1.insert(root,13);
    std::cout<< "In order: " << std::endl;
    tree1.inOrder(root);
    std::cout<<"In pre-order: " <<std::endl;
    tree1.preOrder(root);
    std::cout<< "In post-order: " <<std::endl;
    tree1.postOrder(root);
    std::cout<<std::endl;

    return 0;
}
