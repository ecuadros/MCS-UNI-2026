#include <iostream>
#include "complex.h"

using namespace std;

void Print(const Complex& c){
    cout << c.getReal() << " + " << c.getImag() << "i" << endl;
}

void DemoComplex(){
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex c3(c1); // Constructor de copia
    Complex *pC = new Complex(5.0, 6.0); // Constructor con valores por defecto
    
    Print(c1);
    Print(c2);
    Print(c3);
    Print(*pC);

    delete pC; // Llama al destructor para liberar la memoria asignada a pC
    // Aquí se podrían realizar operaciones como suma, resta, multiplicación y división
    // utilizando los operadores sobrecargados (si se implementan).

}
