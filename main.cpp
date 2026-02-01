#include <iostream> // cout
#include <cstdlib>
#include "util.h"

// g++ main.cpp util.cpp -o main
int main(){
    std::cout << "MCS-2026-PM\n";
    int x = 20, y = 45, r, exponent;
    float f1, f2, f3, base, result;
    double d1, d2;

// 1. Bernaola Gayoso - César Raúl
    std::cout << "Demo Bernaola Gayoso Cesar" << std::endl;
    p1 = 10, p2 = 30;
    p3 = addition(p1, p2);
    std::cout << "la suma de x=" << p1 << " y=" << p2 << " es: " << p3 << "\n\n";

// 2. Cuadros-Vargas Ernesto
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    T1 E1 = 20, E2 = 45;
    intercambiar(E1, E2);
    std::cout << "x=" << E1 << " y=" << E2 << "\n\n";

// 3. Diaz Tapia Adderly
// substraction
    std::cout << "Demo Adderly Díaz Tapia" << std::endl;
    Ts d1 = 10.1; d2=7.2;
    std::cout<<"La resta es: " << subtraction(d1, d2) << "\n\n";

// 4. Lopez Flores Royer Amed
// multiplication
    std::cout << "Demo Lopez Flores Royer Amed" << std::endl;
    MultParam mpx = 6.1, mpy = 7.2;
    MultParam mpr = multiplicar(mpx, mpy);
    std::cout << "multiplicar(" << mpx << "," << mpy << ")=" << mpr << "\n\n";
// 5. López Sandoval, Heiner
// division
   std::cout << "Demo Lopez Sandoval Heiner" << std::endl;
    f1 = 40; f2 = 50;
    f3 = division(f1, f2);
    std::cout << f1 << "/" << f2 << " = " << f3 << "\n" ;
// 6. Mallaupoma Cesar
// genera un numero aleatorio
    std::cout << "Demo Cesar Mallaupoma Orellana" << std::endl;
    srand(1);
    IntParam aleatorio = generarNumAleatorio();
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
    T14 base = 3.1415; 
    T1 exponent = 3;
    T14 result = power(base, exponent);
    std::cout << base << " ^ " << exponent << " = " << result << "\n\n";
    
    return 0;
}
