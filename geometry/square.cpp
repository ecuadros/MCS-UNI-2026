#include "square.h"

CSquare::CSquare(string name, Width s) 
    : CRectangle(name, s, s) {
        cout << "CSquare(" << GetName() << ")" << endl;
    }

CSquare::~CSquare() {
    cout << "~CSquare(" << GetName() << ")" << endl;
}

