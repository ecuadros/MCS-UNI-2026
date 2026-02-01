#include "util.h"
#include <cstdlib>

// 1. Bernaola Gayoso - César Raúl
int addition(int a, int b) { 
    return a + b;
}

// 2. Cuadros-Vargas Ernesto
void intercambiar(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

// 3. Diaz Tapia Adderly
double subtraction (double n, double m){
    return n-m;
}
// 4. Lopez Flores Royer Amed
int multiplicar(int &a, int &b){
    return a * b;
}
// 5. López Sandoval, Heiner
float division(float &f1, float &f2)
{
    float f3 = f1 / f2 ;
    return(f3) ;
}
// 6. Mallaupoma Cesar
int generarNumAleatorio(){
    return rand() % 10;
}

// 7. Miranda Zarate Jorge Luis
unsigned int factorial(unsigned int number){
    unsigned int result = 1;
    for(int i=number; i > 0; i--){
        result *= i;
    }
    return result;
}

// 8. Riveros Guevara


// 9. Segovia Giancarlo
int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 10. Suarez Maciel Susana Isabel


// 11. Tellez Jhon


// 12. Valcarcel Julian


// 13. Vilca Aguilar Luis


// 14. Vinatea Chávez Camilo Jorge

