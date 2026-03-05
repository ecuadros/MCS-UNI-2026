#include <cmath>

#include "cube.h"

CCUBE::CCUBE(string name, Width s) 
    : CShape(name), lado(s) {
        cout << "CCUBE(" << GetName() << ")" << endl;
    }

CCUBE::~CCUBE() {
    cout << "~CCUBE(" << GetName() << ")" << endl;
}

Volumen CCUBE::GetVolumen() const {
    return pow(lado, 3); // Volumen de un cubo = lado^3
}