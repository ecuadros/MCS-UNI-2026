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
    x = 5;

// 4. Lopez Flores Royer Amed
// multiplication

// 5. López Sandoval, Heiner
// division

// 6. Mallaupoma Cesar
// genera un numero aleatorio

// 7. Miranda Zarate Jorge Luis
// factorial

// 8. Riveros Guevara
// IsPrime

// 9. Segovia Giancarlo
// fibonacci

// 10. Suarez Maciel Susana Isabel
// average()
    std::cout << "Demo Susana Suarez Maciel" << std::endl;
    float prom = average(x,y);
    std::cout << "Promedio(x,y)=" << prom << "\n\n";

// 11. Tellez Jhon
// sumar 10 numeros naturales

// 12. Valcarcel Julian
// float round(float f, int n)

// 13. Vilca Aguilar Luis
// root
    std::cout << "Demo Vilca Aguilar Luis" << std::endl;
    f1 = 23.0;
    raiz(f1);
    std::cout << "La raiz de (" << f1 << ")=" << raiz(f1) << "\n\n";
    
    return 0;
}