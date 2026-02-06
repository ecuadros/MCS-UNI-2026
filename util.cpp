#include <cmath>
#include <cstdlib>
#include "util.h"

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

bool esPrimo(int &n) {
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
int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 10. Suarez Maciel Susana Isabel
float average(int x, int y){
    return (x + y)/2.0f;

}

// 11. Tellez Jhon


// 12. Valcarcel Julian


// 13. Vilca Aguilar Luis
float raiz(float a){
    float res = sqrt(a);
    return res;
}

// 14. Vinatea Chávez Camilo Jorge
float power(float base, int exponent){
    float result = 1.0;
    for(int i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
}
