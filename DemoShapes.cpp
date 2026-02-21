#include <iostream>
#include <memory>
#include <vector>
#include "geometry.h"

using namespace std;

void DemoShapes() {
    // Crear un vector de punteros a la clase base (polimorfismo)

    const int size = 3;
    CShape *shapes1[size];
    shapes1[0] = new CRectangle(5.0, 3.0);
    shapes1[1] = new CCircle(2.5);
    shapes1[2] = new CTriangle(4.0, 6.0);

    cout << "Forma #1\n";
    for(size_t i = 0; i < size; i++) {
        cout << "Nombre:  " << shapes1[i]->GetName()
             << " | Área: " << shapes1[i]->GetArea()
             << " | Test: ";
        shapes1[i]->Test(cout);
        cout << endl;
    }
    cout << "========================\n";
    cout << "Forma #2\n";
    cout << *shapes1[0] << endl;
    cout << *shapes1[1] << endl;
    cout << *shapes1[2] << endl;

    cout << "========================\n";
    cout << "Forma #3\n";
    for(size_t i = 0; i < size; i++) {
        shapes1[i]->Print(cout);
        cout << endl;
    }
    cout << "========================\n";
    cout << "Forma #4\n";
    // Calcular y mostrar áreas
    for (auto pShape : shapes1) {
        cout << *pShape << endl;
    }

    for(size_t i = 0; i < size; i++) {
        delete shapes1[i];
    }
    cout << "========================\n";
    cout << "Forma #5\n";
    vector<CShape *> shapes2;
    shapes2.push_back(new CRectangle(5.0, 3.0));
    shapes2.push_back(new CCircle(2.5));
    shapes2.push_back(new CTriangle(4.0, 6.0));
    for (const auto& shape : shapes2) {
        cout << *shape << endl;
    }
    for(size_t i = 0; i < size; i++) {
        delete shapes2[i];
    }
    cout << "========================\n";
    cout << "Forma #6\n";
    vector<unique_ptr<CShape>> shapes3;

    shapes3.push_back(make_unique<CRectangle>(5.0, 3.0));
    shapes3.push_back(make_unique<CCircle>(2.5));
    shapes3.push_back(make_unique<CTriangle>(4.0, 6.0));

    // Calcular y mostrar áreas
    for (const auto& shape : shapes3) {
        cout << *shape << endl;
    }

    
}