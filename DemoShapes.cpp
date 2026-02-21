#include "geometry.h"
#include "geometry/square.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void DemoShapes() {
  // Crear un vector de punteros a la clase base (polimorfismo)

  cout << "========================\n";
  cout << "Forma #0\n";
  {
    CSquare square("Cuadrado0",4.0);
    cout << square << endl;
  }
  cout << "========================\n";
  cout << "Forma #1\n";
  const int size = 4;
  CShape *shapes1[size];
  shapes1[0] = new CRectangle("Rectangulo1",5.0, 3.0);
  shapes1[1] = new CCircle("Circulo1",2.5);
  shapes1[2] = new CTriangle("Triangulo1",4.0, 6.0);
  shapes1[3] = new CSquare("Cuadrado1",4.0);

  cout << "Forma #2\n";
  for (size_t i = 0; i < size; i++) {
    cout << "Nombre:  " << shapes1[i]->GetClassName()
         << " | Área: " << shapes1[i]->GetArea() << " | Test: ";
    shapes1[i]->Test(cout);
    cout << endl;
  }
  cout << "========================\n";
  cout << "Forma #3\n";
  for (size_t i = 0; i < size; i++)
    cout << *shapes1[i] << endl;

  cout << "========================\n";
  cout << "Forma #4\n";
  for (size_t i = 0; i < size; i++) {
    shapes1[i]->Print(cout);
    cout << endl;
  }
  cout << "========================\n";
  cout << "Forma #5\n";
  // Calcular y mostrar áreas
  for (auto pShape : shapes1) {
    cout << *pShape << endl;
  }

  cout << "Destruyendo objetos manualmente\n";
  for (size_t i = 0; i < size; i++) {
    delete shapes1[i];
  }
  cout << "========================\n";
  cout << "Forma #6\n";
  vector<CShape *> shapes2;
  shapes2.push_back(new CRectangle("Rectangulo2",5.0, 3.0));
  shapes2.push_back(new CCircle("Circulo2",2.5));
  shapes2.push_back(new CTriangle("Triangulo2",4.0, 6.0));
  shapes2.push_back(new CSquare("Cuadrado2",4.0));
  for (const auto &shape : shapes2) {
    cout << *shape << endl;
  }
  for (size_t i = 0; i < size; i++) {
    delete shapes2[i];
  }
  cout << "========================\n";
  cout << "Forma #7\n";
  vector<unique_ptr<CShape>> shapes3;

  shapes3.push_back(make_unique<CRectangle>("Rectangulo3",5.0, 3.0));
  shapes3.push_back(make_unique<CCircle>("Circulo3",2.5));
  shapes3.push_back(make_unique<CTriangle>("Triangulo3",4.0, 6.0));
  shapes3.push_back(make_unique<CSquare>("Cuadrado3",4.0));

  cout << "Imprimiendo formas con unique_ptr\n";
  // Calcular y mostrar áreas
  for (const auto &shape : shapes3) {
    cout << *shape << endl;
  }
  cout << "===Ultimo mensaje==\n";
}