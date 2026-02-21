#include <numbers>
#include "circle.h"

CCircle::CCircle(string name, Distance r) 
        : CShape(name), radius(r) {
    cout << "CCircle(" << GetName() << ")" << endl;
}

CCircle::~CCircle() {
    cout << "~CCircle(" << GetName() << ")" << endl;
}

Area2d CCircle::GetArea() const {
    return std::numbers::pi * radius * radius;
}