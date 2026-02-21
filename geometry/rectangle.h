#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "shape.h"

using namespace std;

class CRectangle : public CShape {
private:
  Width m_width;
  Height m_height;

public:
  CRectangle(string name, Width w, Height h);
  virtual ~CRectangle();
  Area2d GetArea() const override;
  string GetClassName() const override { return string("Rectangle"); };
};

#endif // __RECTANGLE_H__