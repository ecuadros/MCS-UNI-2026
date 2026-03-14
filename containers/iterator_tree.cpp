#include "iterator.h"
#include "tree.h"  // Necesitamos la definición completa de Tree

template <typename T>
void InOrderIterator<T>::pushLeft(typename Tree<T>::Node* node) {
    while (node != nullptr) {
        stack.push(node);
        node = node->left;
    }
}

template <typename T>
InOrderIterator<T>::InOrderIterator(const Tree<T>* t, typename Tree<T>::Node* start) 
    : tree(t), current(start) {
    
    if (start != nullptr) {
        // Limpiamos la pila y apilamos todos los izquierdos
        while (!stack.empty()) stack.pop();
        pushLeft(start);
        
        // El primer elemento es el tope de la pila
        if (!stack.empty()) {
            current = stack.top();
        }
    }
}

template <typename T>
InOrderIterator<T>& InOrderIterator<T>::operator++() {
    if (stack.empty()) {
        current = nullptr;
        return *this;
    }
    
    // Sacamos el nodo actual de la pila
    typename Tree<T>::Node* node = stack.top();
    stack.pop();
    
    // Si tiene hijo derecho, apilamos todos sus izquierdos
    if (node->right != nullptr) {
        pushLeft(node->right);
    }
    
    // Actualizamos current al siguiente elemento (tope de la pila)
    if (!stack.empty()) {
        current = stack.top();
    } else {
        current = nullptr;
    }
    
    return *this;
}

template <typename T>
bool InOrderIterator<T>::operator!=(const InOrderIterator<T>& other) const {
    return current != other.current;
}

template <typename T>
int InOrderIterator<T>::operator*() const {
    return current->data;
}

// Instanciación explícita para int (la más común)
template class InOrderIterator<int>;