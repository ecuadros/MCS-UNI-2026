#include "tree.h"

template <typename T>
Tree<T>::Tree() : root(nullptr) {}

template <typename T>
Tree<T>::~Tree() {
    clear(root);
}

template <typename T>
typename Tree<T>::Node* Tree<T>::insertar(Node* node, T valor) {
    if (node == nullptr) {
        return new Node(valor);
    }
    
    if (valor < node->data) {
        node->left = insertar(node->left, valor);
    } else if (valor > node->data) {
        node->right = insertar(node->right, valor);
    }
    
    return node;
}

template <typename T>
void Tree<T>::insertar(T valor) {
    root = insertar(root, valor);
}

template <typename T>
void Tree<T>::clear(Node* node) {
    if (node) {
        clear(node->left);
        clear(node->right);
        delete node;
    }
}

template <typename T>
typename Tree<T>::iterator Tree<T>::begin() const {
    return iterator(this, root);
}

template <typename T>
typename Tree<T>::iterator Tree<T>::end() const {
    return iterator(this, nullptr);
}

// Instanciación explícita para int
template class Tree<int>;

void Demo_iterarInOrder_hipo(){

Tree<int> arbol;
    
    // Insertamos números
    cout << "Insertando números: ";
    int numeros[] = {50, 30, 70, 20, 40, 60, 80, 25, 35, 75};
    for (int num : numeros) {
        cout << num << " ";
        arbol.insertar(num);
    }
    cout << endl;
    
    // Usando el iterador in-order (estilo tradicional)
    cout << "\nRecorrido in-order (estilo tradicional): ";
    for (Tree<int>::iterator it = arbol.begin(); it != arbol.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Usando auto (más simple)
    cout << "Recorrido in-order (con auto): ";
    for (auto it = arbol.begin(); it != arbol.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Usando range-based for loop (C++11)
    cout << "Recorrido in-order (range-based for): ";
    for (int valor : arbol) {
        cout << valor << " ";
    }
    cout << endl;
    
    // Demostración manual paso a paso
    cout << "\nDemostración manual del iterador:" << endl;
    auto it = arbol.begin();
    cout << "Primer elemento: " << *it << endl;
    ++it;
    cout << "Segundo elemento: " << *it << endl;
    ++it;
    cout << "Tercer elemento: " << *it << endl;
    
}