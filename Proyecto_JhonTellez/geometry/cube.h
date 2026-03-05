#ifndef __CUBE_H__
#define __CUBE_H__

//#include "square.h"


#include "shape.h"

class CCUBE : public CShape {
private:
  Width lado;// Lado del cubo
public:
  CCUBE(string name, Width s);
  virtual ~CCUBE();

  Volumen GetVolumen() const override;//
  string GetClassName() const override { return string("Cube"); };
  ostream &Test(ostream &os) const override { return os << "TestCube"; };
};

#endif // __CUBE_H__