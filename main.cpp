#include <iostream> // cout
#include <cstdlib>
#include "util.h"

// g++ -std=c++17 main.cpp util.cpp -o main
int main(){
    std::cout << "MCS-2026-PM\n";
    int x = 20, y = 45, r, exponent;
    float f1, f2, f3, base, result;
    double d1, d2;

// 1. Bernaola Gayoso - César Raúl
    std::cout << "Demo Bernaola Gayoso Cesar" << std::endl;
    T1 p1 = 10, p2 = 30;
    T1 p3 = addition(p1, p2);
    std::cout << "la suma de x=" << p1 << " y=" << p2 << " es: " << p3 << "\n\n";

    T2 q1 = 5.5, q2 = 10.2;
    T2 q3 = addition(q1, q2);
    std::cout << "la suma de x=" << q1 << " y=" << q2 << " es: " << q3 << "\n\n";

// 2. Cuadros-Vargas Ernesto
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    T1 E1 = 20, E2 = 45;
    intercambiar(E1, E2);
    std::cout << "x=" << E1 << " y=" << E2 << "\n\n";

    T2 a = 5.5, b = 10.2;
    intercambiar(a, b);
    std::cout << "a=" << a << " b=" << b << "\n";

    std::string str1 = "MCS", str2 = "UNI";
    intercambiar(str1, str2);
    std::cout << "str1=" << str1 << " str2=" << str2 << "\n";

// 3. Diaz Tapia Adderly
// substraction
    std::cout << "Demo Adderly Díaz Tapia" << std::endl;
    Ts a1 = 10.1, a2=7.2;
    std::cout<<"La resta es: " << subtraction(a1, a2) << "\n\n";

// 4. Lopez Flores Royer Amed
// multiplication
    std::cout << "Demo Lopez Flores Royer Amed" << std::endl;
    MultParamFloat mpx = 6.1, mpy = 7.2;
    MultParamFloat mpr = multiplicar(mpx, mpy);
    std::cout << "multiplicar(" << mpx << "," << mpy << ")=" << mpr << "\n\n";
    MultParamInt mpi1 = 5, mpi2 = 10;
    MultParamInt mpir = multiplicar(mpi1, mpi2);
    std::cout << "multiplicar(" << mpi1 << "," << mpi2 << ")=" << mpir << "\n\n";
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
    MiInt aleatorio = generarNumAleatorio<MiInt>();
        std::cout << "El numero aleatorio generado es "<< aleatorio  << "\n\n";

// 7. Miranda Zarate Jorge Luis
    std::cout << "Demo Miranda Zarate Jorge" << std::endl;
    X1 j0 = 10;
    std::cout << x << "! = " << factorial(j0) << "\n\n";

    X2 j1 = 23;
    std::cout << x << "! = " << factorial(j1) << "\n\n";

// 8. Riveros Guevara
// IsPrime
    {
    std::cout << "Demo Riveros Guevara Hipolito" << std::endl;
    TH n = 29;
    if (esPrimo(n))
        std::cout << n << " es primo \n\n";
    else
        std::cout << n << " no es primo\n\n";
    }

// 9. Segovia Giancarlo
// fibonacci
    {
    std::cout << "Demo Giancarlo Segovia" << std::endl;
    x = 6;
    std::cout << "Fibonacci de " << x << " es " << fibonacci(x) << "\n\n";
    }
// 10. Suarez Maciel Susana Isabel
// average()
    {
    std::cout << "Demo Susana Suarez Maciel" << std::endl;
    ParamDouble sx = 20, sy = 45;
    std::cout << "Promedio(x,y)=" << average(sx,sy) << "\n\n";
    }

// 11. Tellez Jhon
// sumar 10 numeros naturales

    int suma = 0;
    std::cout<<"Ingrese el numero 10";
    // TODO: no ingresar valores
    x = 10;
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

// 13. Vilca Aguilar Luis
// root
    {
    std::cout << "Demo Vilca Aguilar Luis" << std::endl;
    F1 L1 = 23.0;
    raiz(L1);
    std::cout << "La raiz (" << L1 << ") = " << raiz(L1) << "\n\n";
    }
// 14. Vinatea Chávez Camilo Jorge
    {
    std::cout << "Demo Vinatea Camilo" << std::endl;

    T2 base = 3.1415; 
    T1 exponent = 3;
    T2 result = power(base, exponent);
    std::cout << base << " ^ " << exponent << " = " << result << "\n\n";
    
    T1 base2 = 6; 
    T1 exponent2 = 4;
    T1 result2 = power(base2, exponent2);
    std::cout << base2 << " ^ " << exponent2 << " = " << result2 << "\n\n";
    }
    return 0;
}
