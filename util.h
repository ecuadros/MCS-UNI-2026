#ifndef __UTIL_H__
#define __UTIL_H__
#include <cmath>
#include "types.h"


// 1. Bernaola Gayoso - César Raúl
template <typename T>
T addition(T a, T b) { 
    return a + b;
}

template <>
IntParam addition(IntParam a, IntParam b);

// 2. Cuadros-Vargas Ernesto
template <typename T>
void intercambiar(T &a, T &b){
    T tmp = a;
    a     = b;
    b     = tmp;
}

// 3. Diaz Tapia Adderly
template <typename T>
T subtraction (T n, T m){
    return n-m;
 }

// 4. Lopez Flores Royer Amed
// multiplication
template <typename T>
T multiplicar(T &a, T &b){
    return a * b;
}
// 5. López Sandoval, Heiner
// division
template <typename T5>
T5 division(T5 &a, T5 &b){
    return(a/b) ;
}

// 6. Mallaupoma Cesar
// genera un numero aleatorio
template <typename T>
T generarNumAleatorio(){
    return static_cast<T>(std::rand() % 10);
}

// 7. Miranda Zarate Jorge Luis
// factorial
template <typename T>
T factorial(T number){
    T result = 1;
    for(T i=number; i > 0; i--){
        result *= i;
    }
    return result;
}

// 8. Riveros Guevara
// IsPrime
template <typename T>
bool esPrimo(T &n) {
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
template <typename T>
T fibonacci(T n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 10. Suarez Maciel Susana Isabel
// average()
template <typename T>
T average(const T& a, const T& b){
    return ((a + b) / 2.0);
}

// 11. Tellez Jhon
// sumar 10 numeros naturales
template <typename T>
T SumaPrimero10(T x){
    T suma = 0;
    for(T i = 1; i <= x; ++i)
        suma += i;
    return suma;
}

// 12. Valcarcel Julian
// float round(float f, int n)

// 13. Vilca Aguilar Luis
// root
template <typename F>
F raiz(F a){
    F res = sqrt(a);
    return res;
}

// 14. Vinatea Chávez Camilo Jorge
template <typename X, typename Y>
X power(X base, Y exponent){
    X result = 1.0;
    for(Y i = 0; i < exponent; ++i)
        result *= base;
    return result;
}

void DemoInicial();

// 1. Bernaola Gayoso - César Raúl
void DemoInicialBernaolaGayosoCesar();

// 2. Cuadros-Vargas Ernesto
void DemoInicialCuadrosVargas();

// 3. Diaz Tapia Adderly
Void DemoInicialDiazTapia();
// 4. Lopez Flores Royer Amed
void DemoInicialLopezFloresRoyerAmed();
// 5. López Sandoval, Heiner
void DemoInicialLopezSandoval();
// 6. Mallaupoma Cesar

// 7. Miranda Zarate Jorge Luis
void DemoInicialMirandaZarate();

// 8. Riveros Guevara
void DemoInicialRiverosGuevara();
// 9. Segovia Giancarlo

// 10. Suarez Maciel Susana Isabel.
void DemoInicialSusana();

// 11. Tellez Jhon
void DemoInicialJhoinTellez();

// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis
void DemoInicialVilcaAguilar();

// 14. Vinatea Chávez Camilo Jorge  
void DemoInicialCamiloVinatea();


#endif // __UTIL_H__

