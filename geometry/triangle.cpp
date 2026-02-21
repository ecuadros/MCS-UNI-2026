#include "triangle.h"

CTriangle::CTriangle(string name, Width b, Height h) 
         : CShape(name), base(b), height(h) {
            cout << "CTriangle(" << GetName() << ")" << endl;
         }

CTriangle::~CTriangle() {
    cout << "~CTriangle(" << GetName() << ")" << endl;
}

Area2d CTriangle::GetArea() const {
    return 0.5 * base * height;
}