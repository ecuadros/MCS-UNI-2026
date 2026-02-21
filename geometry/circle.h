#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "shape.h"

class CCircle : public CShape {
private:
    Distance radius;
public:
    CCircle(Distance r);
    Area2d GetArea() const override;
    string GetName() const override { return string("Circle"); };
    ostream& Test(ostream &os) const override { return os << "TestCircle"; };
};

#endif // __CIRCLE_H__