#ifndef TREE_H
#define TREE_H

#include "iterator.h"

template <typename T>
class Tree {
public:
    struct Node {
        T data;
        Node* left;
        Node* right;
        
        Node(T valor) : data(valor), left(nullptr), right(nullptr) {}
    };
    
    // Definimos los tipos de iteradores
    typedef InOrderIterator<T> iterator;
    
private:
    Node* root;
    
    Node* insertar(Node* node, T valor);
    void clear(Node* node);
    
public:
    Tree();
    ~Tree();
    
    void insertar(T valor);
    
    // Iteradores
    iterator begin() const;
    iterator end() const;
    
    // Getter para root (necesario para los iteradores)
    Node* getRoot() const { return root; }
    
    // Otros métodos
    bool isEmpty() const { return root == nullptr; }
};

void Demo_iterarInOrder_hipo();

#include "tree.cpp"  // Incluimos la implementación

#endif