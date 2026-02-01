#include <iostream> // cout
#include "util.h"

// g++ main.cpp util.cpp -o main
int main(){
    std::cout << "MCS-2026-PM\n";
    int x = 20, y = 45, r;
    float f1, f2, f3;

// 1. Bernaola Gayoso - César Raúl


// 2. Cuadros-Vargas Ernesto
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    x = 20, y = 45;
    intercambiar(x, y);
    std::cout << "x=" << x << " y=" << y << "\n\n";

// 3. Diaz Tapia Adderly
// substraction
    std::cout << "Demo Adderly Díaz Tapia" << std::endl;
    x = 10.1; y=7.2;
    std::cout<<"La resta entre X e Y es: " << subtraction(x,y) << "\n\n";

// 4. Lopez Flores Royer Amed
// multiplication
    std::cout << "Demo Lopez Flores Royer Amed" << std::endl;
    x = 6; y = 7;
    r = multiplicar(x, y);
    std::cout << "multiplicar(" << x << "," << y << ")=" << r << "\n\n";
// 5. López Sandoval, Heiner
// division
   std::cout << "Demo Lopez Sandoval Heiner" << std::endl;
    f1 = 40; f2 = 50;
    f3 = division(f1, f2);
    std::cout << f1 << "/" << f2 << " = " << f3 << "\n" ;

// 6. Mallaupoma Cesar
// genera un numero aleatorio

// 7. Miranda Zarate Jorge Luis
    std::cout << "Demo Miranda Zarate Jorge" << std::endl;
    x = 10;
    std::cout << x << "! = " << factorial(x) << "\n\n";

// 8. Riveros Guevara
// IsPrime

// 9. Segovia Giancarlo
// fibonacci

// 10. Suarez Maciel Susana Isabel
// average()

// 11. Tellez Jhon
// sumar 10 numeros naturales

// 12. Valcarcel Julian
// float round(float f, int n)

// 13. Vilca Aguilar Luis
// root
    
    return 0;
}