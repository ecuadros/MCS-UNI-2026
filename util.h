#include "types.h"
#include <cmath>

// 1. Bernaola Gayoso - César Raúl
template <typename T>
T addition(T a, T b) { 
    return a + b;
}

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
template <typename MultTemp>
MultTemp multiplicar(MultTemp &a, MultTemp &b){
    return a * b;
}
// 5. López Sandoval, Heiner
// division
float division(float &f1, float &f2);

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

int numero( int n);

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

