#include <iostream>
#include "xvector.h"
#include "xvectoriterator.h"

using namespace std;

void DemoXVectorIterator() {
    cout << "\n--- Probando XVector Iterator ---" << endl;

    // 1. Crear un vector e insertar valores
    XVector<VectorTraits<int>> myVec;
    myVec.PushBack(10);
    myVec.PushBack(20);
    myVec.PushBack(30);
    myVec.PushBack(40);

    
    cout << "Metodo 1 (Manual explícito): ";
    auto it = xvector_iterator<VectorTraits<int>>::begin(myVec);
    auto end_it = xvector_iterator<VectorTraits<int>>::end(myVec);
    
    for (; it != end_it; ++it) {
        cout << *it << " "; // Magicamente llama a getDataRef()
    }
    cout << endl;

    
    cout << "Metodo 2 (Range-based for auto): ";
    for (auto val : myVec) {
        cout << val << " "; 
    }
    cout << endl;
    cout << "---------------------------------\n" << endl;
}