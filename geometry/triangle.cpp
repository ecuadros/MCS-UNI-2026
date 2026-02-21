#include "triangle.h"

CTriangle::CTriangle(Width b, Height h) 
         : base(b), height(h) {}

Area2d CTriangle::GetArea() const {
    return 0.5 * base * height;
}