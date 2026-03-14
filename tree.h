#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int valor);
};

class Tree {
private:
    Node* root;
    Node* insertar(Node* node, int valor);
    
public:
    Tree();
    void insertar(int valor);
    Node* getRoot() const;
};


void iterarInOrder(Node* nodo, ostream& os);
void Demo_iterarInOrder_hipo();

#endif