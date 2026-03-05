#include "geometry.h"
//#include "geometry/square.h"
#include <iostream>
#include <memory>
#include <vector>

#include "geometry/cube.h"// Agregar include de cube.h -- Jhon Tellez


using namespace std;

void DemoShapes() {
  // Crear un vector de punteros a la clase base (polimorfismo)

  cout << "========================\n";
  cout << "Forma #0\n";
  {

    CCUBE cube("Cubo0",4.0);
    cout << cube << endl;

  }
  cout << "========================\n";
  cout << "Forma #1\n";
  //const int size = 4;
  CShape *shapes1;
  shapes1 = new CCUBE("Cubo",4.0);

  cout << "========================\n";
  cout << "Forma #4\n";
  //for (size_t i = 0; i < size; i++) {
    shapes1->Print(cout);
    cout << endl;
  //}
  cout << "========================\n";
  cout << "Forma #5\n";

  cout << "Destruyendo objetos manualmente\n";
    delete shapes1;
  //}
  cout << "========================\n";
  cout << "Forma #6\n";
  vector<CShape *> shapes2;
  shapes2.push_back(new CCUBE("Cubo2",4.0));
  for (const auto &shape : shapes2) {
    cout << *shape << endl;
  }

  cout << "========================\n";
  cout << "Forma #7\n";
  vector<unique_ptr<CShape>> shapes3;


  shapes3.push_back(make_unique<CCUBE>("Cubo3",4.0));

  cout << "Imprimiendo formas con unique_ptr\n";
  // Calcular y mostrar áreas
  for (const auto &shape : shapes3) {
    cout << *shape << endl;
  }
  cout << "===Ultimo mensaje==\n";
}