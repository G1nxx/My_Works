#ifndef LAB7TASK2_AVLTREE_H
#define LAB7TASK2_AVLTREE_H

#include <iostream>
#include <algorithm>

class AVLTree {

    AVLTree *left;
    AVLTree *right;
    AVLTree *parent;

    int balanceFactor;
    int data;

    explicit AVLTree(int value, AVLTree *parent = nullptr);

    void removeNode();

    void reBalance();

    void updateBalance();

    AVLTree *findRight();

    int calculateHeight(AVLTree *node);

    void rotateRight();

    void rotateLeft();

public:
    AVLTree();

    ~AVLTree() = default;

    void insert(int value);

    bool contains(int value);

    void remove(int value);

    int get();

    AVLTree *Left();

    AVLTree *Right();

    AVLTree *Parent();

    AVLTree *operator=(const AVLTree &other);
};


#endif //LAB7TASK2_AVLTREE_H
