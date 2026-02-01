#include <iostream> // cout
#include <cstdlib>
#include "util.h"

// g++ main.cpp util.cpp -o main
int main(){
    std::cout << "MCS-2026-PM\n";
    long x = 20, y = 45, r, exponent;
    float f1, f2, f3, base, result;
    double d1, d2;

// 1. Bernaola Gayoso - César Raúl
    std::cout << "Demo Bernaola Gayoso Cesar" << std::endl;
    x = 10, y = 30;
    r = addition(x, y);
    std::cout << "la suma de x=" << x << " y=" << y << " es: " << r << "\n\n";

// 2. Cuadros-Vargas Ernesto
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    T1 E1 = 20, E2 = 45;
    intercambiar(E1, E2);
    std::cout << "x=" << E1 << " y=" << E2 << "\n\n";

// 3. Diaz Tapia Adderly
// substraction
    std::cout << "Demo Adderly Díaz Tapia" << std::endl;
    d1 = 10.1; d2=7.2;
    std::cout<<"La resta entre X e Y es: " << subtraction(d1, d2) << "\n\n";

// 4. Lopez Flores Royer Amed
// multiplication
    std::cout << "Demo Lopez Flores Royer Amed" << std::endl;
    x = 6; y = 7;
    r = multiplicar(x, y);
    std::cout << "multiplicar(" << x << "," << y << ")=" << r << "\n\n";
// 5. López Sandoval, Heiner
// division

// 6. Mallaupoma Cesar
// genera un numero aleatorio
    std::cout << "Demo Cesar Mallaupoma Orellana" << std::endl;
    srand(1);
    int aleatorio = generarNumAleatorio();
        std::cout << "El numero aleatorio generado es "<< aleatorio  << "\n\n";

// 7. Miranda Zarate Jorge Luis
    std::cout << "Demo Miranda Zarate Jorge" << std::endl;
    x = 10;
    std::cout << x << "! = " << factorial(x) << "\n\n";

// 8. Riveros Guevara
// IsPrime
    std::cout << "Demo Riveros Guevara Hipolito" << std::endl;
    TH n = 29;
    if (esPrimo(n))
        std::cout << n << " es primo \n\n";
    else
        std::cout << n << " no es primo\n\n";


// 9. Segovia Giancarlo
// fibonacci
    std::cout << "Demo Giancarlo Segovia" << std::endl;
    x = 6;
    std::cout << "Fibonacci de " << x << " es " << fibonacci(x) << "\n\n";

// 10. Suarez Maciel Susana Isabel
// average()
    std::cout << "Demo Susana Suarez Maciel" << std::endl;
    float prom = average(x,y);
    std::cout << "Promedio(x,y)=" << prom << "\n\n";

// 11. Tellez Jhon
// sumar 10 numeros naturales

    int suma = 0;
    std::cout<<"Ingrese el numero 10";
    // TODO: no ingresar valores
    std::cin>>x;
    // TODO: verificar la comparacion
    // TODO: cambiar a ++i
    // TODO: como solo es 1 instruccion, no necesitas {}
    // TODO: suma += i;
    for (int i =0;i>=x;i++)
    {
        suma = suma + i;
        
    }
    std::cout<<"La suma es: "<<suma<< "\n\n";


// 12. Valcarcel Julian
// float round(float f, int n)

// 13. Vilca Aguilar Luis
// root
    std::cout << "Demo Vilca Aguilar Luis" << std::endl;
    f1 = 23.0;
    raiz(f1);
    std::cout << "La raiz (" << f1 << ") = " << raiz(f1) << "\n\n";
  
// 14. Vinatea Chávez Camilo Jorge
    std::cout << "Demo Vinatea Camilo" << std::endl;
    base = 3.1415; exponent = 3;
    result = power(base, exponent);
    std::cout << base << " ^ " << exponent << " = " << result << "\n\n";
    
    return 0;
}
