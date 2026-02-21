#include <numbers>
#include "circle.h"

CCircle::CCircle(Distance r) : radius(r) {}

Area2d CCircle::GetArea() const {
    return std::numbers::pi * radius * radius;
}