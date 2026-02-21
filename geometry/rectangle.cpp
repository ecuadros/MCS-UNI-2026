#include "rectangle.h"

CRectangle::CRectangle(Width w, Height h) 
    : CShape() {
        m_width = w;
        m_height = h;
    }

Area2d CRectangle::GetArea() const {
    return m_width * m_height;
}