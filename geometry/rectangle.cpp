#include "rectangle.h"

CRectangle::CRectangle(string name, Width w, Height h) 
    : CShape(name), m_width(w), m_height(h) {
        cout << "CRectangle(" << GetName() << ")" << endl;
    }

CRectangle::~CRectangle() {
    cout << "~CRectangle(" << GetName() << ")" << endl;
}

Area2d CRectangle::GetArea() const {
    return m_width * m_height;
}