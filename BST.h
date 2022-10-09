//
// Created by Johnathan Hwang on 10/8/22.
//

#ifndef BST_BST_H
#define BST_BST_H
#include <iostream>
#include <cassert>

template <class T>
class BST {
private:
    T data;
    BST<T>* left = nullptr;
    BST<T>* right = nullptr;

public:
    BST();
    BST(T item);
    BST<T>* insert(BST<T>* root, T item);
    void preOrder(BST<T>* root);
    void inOrder(BST<T>* root);
    void postOrder(BST<T>* root);


};

#include "BST.cpp"
#endif //BST_BST_H
