#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "shape.h"

using namespace std;

class CRectangle : public CShape {
private:
    Width  m_width;
    Height m_height;
public:
    CRectangle(Width w, Height h);
    Area2d GetArea() const override;
    string GetName() const override { return string("Rectangle"); };
};

#endif // __RECTANGLE_H__