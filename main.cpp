#include <iostream> // cout
#include <cmath>    // sqrt
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

bool esPrimo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

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