#include "tree.h"

Node::Node(int valor) {
    data = valor;
    left = nullptr;
    right = nullptr;
}

Tree::Tree() {
    root = nullptr;
}

Node* Tree::insertar(Node* node, int valor) {
    if (node == nullptr) {
        return new Node(valor);
    }
    
    if (valor < node->data) {
        node->left = insertar(node->left, valor);
    }
    else if (valor > node->data) {
        node->right = insertar(node->right, valor);
    }
    
    return node;
}

void Tree::insertar(int valor) {
    root = insertar(root, valor);
}

Node* Tree::getRoot() const {
    return root;
}


// FUNCIÓN ITERADORA en orden
void iterarInOrder(Node* nodo, ostream& os) {
    if (nodo == nullptr) {
        return;
    }
    
    // Primero izquierda con los numeros menores
    iterarInOrder(nodo->left, os);
    
    //nodo actual
    os << nodo->data << " ";
    
    // derecha con los numeros mayores
    iterarInOrder(nodo->right, os);
}

void Demo_iterarInOrder_hipo(){
    Tree arbol;
    
    
    // Insertar nodos
    cout << "Insertando nodos en el arbol..." << endl;
    arbol.insertar(50);
    arbol.insertar(30);
    arbol.insertar(70);
    arbol.insertar(20);
    arbol.insertar(40);
    arbol.insertar(60);
    arbol.insertar(80);
    arbol.insertar(25);
    arbol.insertar(35);
    arbol.insertar(75);
    
    cout << "\n Numeros del arbol en orden: ";
    iterarInOrder(arbol.getRoot(), cout);
    cout << endl;
    
} 