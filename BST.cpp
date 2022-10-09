//
// Created by Johnathan Hwang on 10/8/22.
//

#ifndef BST_BST_CPP
#define BST_BST_CPP
#include "BST.h"
template<class T>
BST<T>::BST() : BST(0) {


}

template<class T>
BST<T>::BST(T item) {
    data = item;
    left = nullptr;
    right = nullptr;
}

template<class T>
BST<T>* BST<T>::insert(BST<T>* root, T item) {
    if (!root) {
        return new BST(item);
    }
    if (item > root-> data) {
        root->right = insert(root->right, item);
    }
    else if (item < root-> data) {
        root->left = insert(root->left, item);
    }
    return root;
}


template<class T>
void BST<T>::preOrder(BST<T> *root) {
    if (!root) {
        return;
    }
    std::cout<< root->data <<std::endl;
    preOrder(root->left);
    preOrder(root->right);
}

template<class T>
void BST<T>::inOrder(BST<T> *root) {
    if (!root) {
        return;
    }
    inOrder(root->left);
    std::cout << root-> data <<std::endl;
    inOrder(root->right);
}

template<class T>
void BST<T>::postOrder(BST<T> *root) {
    if (!root) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->data << std::endl;
}

#endif