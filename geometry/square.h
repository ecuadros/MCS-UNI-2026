#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "rectangle.h"

class CSquare : public CRectangle {
private:
public:
  CSquare(string name, Width s);
  virtual ~CSquare();

  string GetClassName() const override { return string("Square"); };
  ostream &Test(ostream &os) const override { return os << "TestSquare"; };
};

#endif // __SQUARE_H__