#ifndef __SHAPE_H__
#define __SHAPE_H__
#include <iostream>
#include <string>

// Definición del tipo de área (puede ser double o una clase más compleja)
using Area2d = double;
using Width = double;
using Height = double;
using Distance = double;
using namespace std;

class CShape {
private:
  string m_name;

public:
  CShape(string name) : m_name(name) { cout << "CShape(" << name << ")" << endl; };
  virtual ~CShape() { cout << "~CShape(" << m_name << ")" << endl; };

  virtual void   SetName(string name) { m_name = name; };
  virtual string GetName() const { return m_name; };

  virtual Area2d GetArea() const = 0; // Método virtual puro
 

  virtual string GetClassName() const { return string("Shape"); };
  virtual ostream &Test(ostream &os) const { return os << "**********"; };
  friend ostream &operator<<(ostream &os, const CShape &shape) {
    shape.Print(os);
    return os;
  };
  virtual void Print(ostream &os) const {
    os << "Nombre: " << GetClassName() << " | Área: " << GetArea()
       << " | Test: ";
    Test(os);
  };
};

#endif // __SHAPE_H__