#include <iostream>
#include <fstream>
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

    Complex c4(c1 + c2 + Complex(10, 10));
    Complex c5 = c2 + c3 + Complex(5, 5);
    Complex c6(3, 4);
    c5 = c4 = c1;
    cout << "C5: ";
    c5.PrintX(cout);

    ofstream of("Test.txt");
    of << "Hola" << endl;
    c5.PrintX(of);

    ostream &flujo = cout << "C3 con << sobrecargado " << c3 << endl;
    flujo << "Impresión en el flujo\n";

    // cout << x << "Hola" << c3 << x+5 << endl;
    // ----------
    //     cout << "Hola"
    //     --------------
    //             cout << c3
    //             ----------
    //                     cout << x+5
    //                     -----------
    //                             cout << endl;
    //                             ------------
    //                                     cout

    // 1. Bernaola Gayoso - César Raúl
    // c1 += c2;

    // 2. Cuadros-Vargas Ernesto

    // 3. Diaz Tapia Adderly
    // c1 -= c2;

    // 4. Lopez Flores Royer Amed
    // c1 *= c2;

    // 5. López Sandoval, Heiner
    // c1 /= c2;

    // 6. Mallaupoma Cesar
    // 

    // 7. Miranda Zarate Jorge Luis
    c1 = c1 ^ 3;
    cout << "Sobrecarga de operador ^: " << c1 << endl;

    // 8. Riveros Guevara
    // c1 = c2 * c3 ^ 5 - c4 + *pC;

    // 9. Segovia Giancarlo

    // 10. Suarez Maciel Susana Isabel.
    // c1 = c2 - c3;

    // 11. Tellez Jhon
    // c1 = c2 * c3;

    // 12. Valcarcel Julian
    

    // 13. Vilca Aguilar Luis
    // c1 = c2 + 6r;

    // 14. Vinatea Chávez Camilo Jorge
    // c1 = c2 / c3; 
    // c1 = c2 + 7i;

    cout << "Destruyendo objeto dinámico:" << endl;
    delete pC; // Llama al destructor para liberar la memoria asignada a pC

    cout << "Saliendo ..." << endl;
}
