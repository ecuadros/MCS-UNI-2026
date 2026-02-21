#ifndef __SHAPE_H__
#define __SHAPE_H__
#include <string>
#include <iostream>

// Definición del tipo de área (puede ser double o una clase más compleja)
using Area2d   = double;
using Width    = double;
using Height   = double;
using Distance = double;
using namespace std;

class CShape {
public:
  CShape() {};
  virtual ~CShape() {}; // Destructor virtual para correcta eliminación
  
  virtual Area2d GetArea() const = 0; // Método virtual puro
  virtual string GetName() const { return string("Shape"); };
  virtual ostream&   Test(ostream &os) const { return os << "TestShape"; };
  friend ostream& operator<<(ostream &os, const CShape &shape) {
    shape.Print(os);
    return os;
  };
  virtual void Print(ostream &os) const { os << "Nombre: " << GetName() 
                                             << " | Área: " << GetArea() 
                                             << " | Test: ";
                                          Test(os);
                                        };
};

#endif // __SHAPE_H__