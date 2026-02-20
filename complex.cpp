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
    c1 += c2;
    cout << "suma c1 += c2: " << c1 << endl;

    // 2. Cuadros-Vargas Ernesto
    cout << "Cuadros-Vargas Ernesto: " << endl;
    // Añadir una funcion variadic
    cout << "c1: " << c1 << endl;
    c1.AddReal(5, 6, 7, 8); 
    cout << "c1: " << c1 << endl;
    c1.AddImag(1.2, 2.5, 3, 4, 5, 6, 7, 8, 9, 10);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    // 3. Diaz Tapia Adderly
    // c1 -= c2;
    cout<<"Demo de Adderly Díaz"<<endl;
    c2 -= c1;
    cout<<"El resultado de la operación c1 -= c2 es: "<< c2<<endl;

    // 4. Lopez Flores Royer Amed
    // c1 *= c2;
    cout<<"Demo Royer Lopez:"<<endl;
    cout<<"C1:                    "<<c1;
    cout<<"C2:                    "<<c2;
    c1 *= c2;
    cout<<"Resultado de c1 *= c2: "<<c1;
    cout<<endl;
    // 5. López Sandoval, Heiner
    // c1 /= c2;
    Complex c77 = c1 / c2 ;
    cout << "c77: " ;
    c77.PrintX(cout) ;
    c77 /= c2 ;
    cout << "c77: " ;
    c77.PrintX(cout) ;

    // 6. Mallaupoma Cesar
    // 

    // 7. Miranda Zarate Jorge Luis
    c1 = c1 ^ 3;
    cout << "Sobrecarga de operador ^: " << c1 << endl;

    // 8. Riveros Guevara
    // c1 = c2 * c3 ^ 5 - c4 + *pC;

    // 9. Segovia Giancarlo

    // 10. Suarez Maciel Susana Isabel.
        c1 = c2 - c3;
        cout << "c1 = " << c1;

    // 11. Tellez Jhon
    // c1 = c2 * c3;
    c1 = c2 * c3;
    cout << "C1: " << c1 << endl;

    // 12. Valcarcel Julian
    

    // 13. Vilca Aguilar Luis
    // c1 = c2 + 6r;

    // 14. Vinatea Chávez Camilo Jorge
    cout << "\nDemo Camilo Vinatea" << endl;
    cout << "Division de c2 entre c3:" << endl;
    c1 = c2/c3;
    cout << "(" << c2 << ")" << "/" << "(" << c3 << ")" << " = " << c1 << endl;
    //c1.PrintX(cout);
    cout << endl;
    cout << "Suma de complejo mas numero real puro:" << endl;
    Real realNum = -6.5;
    c1 = c2 + realNum; // Suma de complejo con numero real
    cout << c2 << " + " << realNum << " = " << c1 << endl;

    cout << "Destruyendo objeto dinámico:" << endl;
    delete pC; // Llama al destructor para liberar la memoria asignada a pC

    cout << "Saliendo ..." << endl;
}
