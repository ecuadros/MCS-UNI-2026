#ifndef ITERATOR_H
#define ITERATOR_H

#include <stack>

// Forward declaration
template <typename T>
class Tree;

template <typename T>
class InOrderIterator {
private:
    const Tree<T>* tree;           // Referencia al árbol
    typename Tree<T>::Node* current; // Nodo actual
    std::stack<typename Tree<T>::Node*> stack; // Pila para la iteración
    
    // Método auxiliar para apilar todos los nodos izquierdos
    void pushLeft(typename Tree<T>::Node* node);

public:
    // Constructor
    InOrderIterator(const Tree<T>* t, typename Tree<T>::Node* start);
    
    // Operadores del iterador
    InOrderIterator<T>& operator++();
    bool operator!=(const InOrderIterator<T>& other) const;
    int operator*() const;
};

#endif