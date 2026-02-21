#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class CTriangle : public CShape {
private:
    Width  base;
    Height height;
public:
    CTriangle(string name, Width b, Height h);
    virtual ~CTriangle();

    Area2d GetArea() const override;
    string GetClassName() const override { return string("Triangle"); };
    ostream& Test(ostream &os) const override { return os << "TestTriangle"; };
};

#endif // TRIANGLE_H